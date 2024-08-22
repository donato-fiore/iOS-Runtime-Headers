// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXROOTOFAPPDATAWITHDICTIONARY_H
#define ATXROOTOFAPPDATAWITHDICTIONARY_H

@class NSMutableDictionary;


#import "ATXRootOfAppData.h"

@interface ATXRootOfAppDataWithDictionary : ATXRootOfAppData {
    NSMutableDictionary *_sessionCounts;
    NSMutableDictionary *_firstUA;
}




-(NSUInteger)sessionCountForBundleId:(id)arg0 ;
-(NSUInteger)sessionCountForBundleId:(id)arg0 firstAction:(id)arg1 ;
-(id)description;
-(id)init;
-(void)recordSessionWithBundleId:(id)arg0 firstAction:(id)arg1 ;


@end


#endif