// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNABSTRACTSLIDEALTERNATEARCHIVEBUILDFILTER_H
#define KNABSTRACTSLIDEALTERNATEARCHIVEBUILDFILTER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface KNAbstractSlideAlternateArchiveBuildFilter : NSObject {
    NSHashTable *_excludedBuilds;
}


@property (readonly, nonatomic) NSUInteger excludedBuildMinVersion; // ivar: _excludedBuildMinVersion
@property (readonly, nonatomic) BOOL hasExcludedBuilds;


-(id)filteredBuildChunksForBuildChunks:(id)arg0 ;
-(id)filteredBuildsForBuilds:(id)arg0 ;
-(id)initWithExcludedBuildMinVersion:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(void)addExcludedBuild:(id)arg0 ;


@end


#endif