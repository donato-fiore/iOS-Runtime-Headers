// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFAPPCONTEXTAGGREGATOR_H
#define AFAPPCONTEXTAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface AFAppContextAggregator : NSObject



-(void)aggregateContextForAppWithBundleIdentifier:(id)arg0 contextProvider:(id)arg1 completionHandler:(id)arg2 ;
// -(void)aggregateContextForAppWithBundleIdentifier:(id)arg0 contextProvider:(id)arg1 deliveryHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)aggregateContextWithRawOutputForAppWithBundleIdentifier:(id)arg0 contextProvider:(id)arg1 deliveryHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif