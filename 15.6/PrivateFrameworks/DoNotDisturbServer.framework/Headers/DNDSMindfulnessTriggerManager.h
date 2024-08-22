// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMINDFULNESSTRIGGERMANAGER_H
#define DNDSMINDFULNESSTRIGGERMANAGER_H

@class NSMutableDictionary, NSString;
@protocol DNDSBiomeTriggerManager, OS_dispatch_queue, DNDSMindfulnessTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource;

#import <Foundation/Foundation.h>


@interface DNDSMindfulnessTriggerManager : NSObject <DNDSBiomeTriggerManager>

 {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}


@property (weak, nonatomic) NSObject<DNDSMindfulnessTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_featureEnabled;
-(id)init;
-(void)_configureTriggerWithMode:(id)arg0 ;
-(void)_refreshWithMode:(id)arg0 event:(id)arg1 ;
-(void)refresh;


@end


#endif