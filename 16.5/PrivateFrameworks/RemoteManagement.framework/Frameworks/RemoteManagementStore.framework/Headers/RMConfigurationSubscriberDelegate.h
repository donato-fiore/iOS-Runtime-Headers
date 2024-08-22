// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMCONFIGURATIONSUBSCRIBERDELEGATE_H
#define RMCONFIGURATIONSUBSCRIBERDELEGATE_H

@class NSConditionLock, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RMConfigurationSubscriberDelegate : NSObject {
    NSConditionLock *_applyLock;
}


@property (readonly, copy, nonatomic) NSDictionary *applicatorClassNameByConfigurationType; // ivar: _applicatorClassNameByConfigurationType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *applicatorQueue; // ivar: _applicatorQueue


+(id)sharedDelegateWithApplicators:(id)arg0 ;
-(id)initWithApplicators:(id)arg0 ;
-(void)didFailToFetchConfigurationsWithTypes:(id)arg0 scope:(NSInteger)arg1 error:(id)arg2 ;
-(void)didFetchConfigurationsByType:(id)arg0 storesByIdentifier:(id)arg1 scope:(NSInteger)arg2 ;


@end


#endif