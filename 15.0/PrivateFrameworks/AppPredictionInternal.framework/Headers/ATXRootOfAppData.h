// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXROOTOFAPPDATA_H
#define ATXROOTOFAPPDATA_H


#import <Foundation/Foundation.h>


@interface ATXRootOfAppData : NSObject



-(NSUInteger)docFreqForBundleId:(id)arg0 withAction:(id)arg1 ;
-(NSUInteger)sessionCountForBundleId:(id)arg0 ;
-(NSUInteger)sessionCountForBundleId:(id)arg0 firstAction:(id)arg1 ;
-(id)init;
-(id)initInternal;
-(void)recordDocFreqWithBundleId:(id)arg0 hasAction:(id)arg1 ;
-(void)recordSessionWithBundleId:(id)arg0 firstAction:(id)arg1 ;


@end


#endif