// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSSMARTTRIGGERMANAGER_H
#define DNDSSMARTTRIGGERMANAGER_H

@class NSMutableDictionary, NSString;
@protocol DNDSBiomeTriggerManager, OS_dispatch_queue, DNDSSmartTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource;

#import <Foundation/Foundation.h>


@interface DNDSSmartTriggerManager : NSObject <DNDSBiomeTriggerManager>

 {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
}


@property (weak, nonatomic) NSObject<DNDSSmartTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_configureSmartTriggerWithSupportedModes:(id)arg0 ;
-(void)_refreshIfNeccessaryForEvent:(id)arg0 ;
-(void)_refreshWithSupportedModes:(id)arg0 event:(id)arg1 ;
-(void)refresh;


@end


#endif