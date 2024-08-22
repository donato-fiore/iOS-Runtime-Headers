// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEDSTATSDATACOHORT_H
#define FEDSTATSDATACOHORT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FedStatsDataCohort : NSObject

@property (readonly, nonatomic) NSDictionary *namespaceMap; // ivar: _namespaceMap


+(id)keysForCohorts:(id)arg0 namespaceID:(id)arg1 parameters:(id)arg2 possibleError:(*id)arg3 ;
+(id)sharedInstance;
-(id)init;


@end


#endif