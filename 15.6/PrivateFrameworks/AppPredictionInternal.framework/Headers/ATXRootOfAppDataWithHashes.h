// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXROOTOFAPPDATAWITHHASHES_H
#define ATXROOTOFAPPDATAWITHHASHES_H

@class NSMutableDictionary;


#import "ATXRootOfAppData.h"

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {
    NSMutableDictionary *_dataForBundleId;
}




-(NSUInteger)sessionCountForBundleId:(id)arg0 ;
-(NSUInteger)sessionCountForBundleId:(id)arg0 firstAction:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;
-(void)recordSessionWithBundleId:(id)arg0 firstAction:(id)arg1 ;


@end


#endif