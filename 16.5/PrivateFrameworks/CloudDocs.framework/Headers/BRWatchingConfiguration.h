// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRWATCHINGCONFIGURATION_H
#define BRWATCHINGCONFIGURATION_H

@class NSDictionary, FPItemID, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BRWatchingConfiguration : NSObject {
    NSDictionary *_appLibraryIDToURLMapOfSuppliedAppIDs;
    NSDictionary *_appLibraryIDToURLMapOfSuppliedURLs;
    FPItemID *_trashItemID;
}


@property (readonly, nonatomic) NSArray *appLibraryIDs; // ivar: _appLibraryIDs
@property (readonly, nonatomic) NSString *gatherPrefix; // ivar: _gatherPrefix
@property (readonly, nonatomic) NSArray *urls; // ivar: _urls
@property (readonly, nonatomic) NSUInteger watchTypes; // ivar: _watchTypes


-(id)appLibraryIDToURLMapOfSuppliedAppIDs;
-(id)appLibraryIDToURLMapOfSuppliedURLs;
-(id)centralizedTrashItemID;
-(id)initWithScopes:(id)arg0 predicate:(id)arg1 ;


@end


#endif