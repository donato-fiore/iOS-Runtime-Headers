// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRWATCHINGCONFIGURATION_H
#define BRWATCHINGCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BRWatchingConfiguration : NSObject

@property (readonly, nonatomic) NSArray *appLibraryIDs; // ivar: _appLibraryIDs
@property (readonly, nonatomic) NSString *gatherPrefix; // ivar: _gatherPrefix
@property (readonly, nonatomic) NSArray *urls; // ivar: _urls
@property (readonly, nonatomic) NSUInteger watchTypes; // ivar: _watchTypes


-(id)initWithScopes:(id)arg0 predicate:(id)arg1 ;


@end


#endif