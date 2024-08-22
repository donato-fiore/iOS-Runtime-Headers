// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSMARTSIRIVOLUMERUNPOLICY_H
#define CSSMARTSIRIVOLUMERUNPOLICY_H

@class CSPolicy;
@protocol OS_dispatch_queue;



@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)_addSmartSiriVolumeEnabledConditions;
-(void)_subscribeEventMonitors;


@end


#endif