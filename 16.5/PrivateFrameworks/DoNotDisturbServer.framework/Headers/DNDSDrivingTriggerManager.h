// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSDRIVINGTRIGGERMANAGER_H
#define DNDSDRIVINGTRIGGERMANAGER_H

@class NSMutableDictionary, CARAutomaticDNDStatus, NSString;
@protocol DNDSBiomeTriggerManager, OS_dispatch_queue, DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource;

#import <Foundation/Foundation.h>


@interface DNDSDrivingTriggerManager : NSObject <DNDSBiomeTriggerManager>

 {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    os_unfair_lock_s _lock;
    CARAutomaticDNDStatus *_status;
}


@property (weak, nonatomic) NSObject<DNDSDrivingTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_featureEnabled;
-(id)init;
-(void)_configureDrivingTriggerWithMode:(id)arg0 ;
-(void)_refreshWithMode:(id)arg0 event:(id)arg1 ;
-(void)refresh;


@end


#endif