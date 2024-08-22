// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRIACCESSORYMONITOR_H
#define HMDSIRIACCESSORYMONITOR_H

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

#import <Foundation/Foundation.h>


@interface HMDSiriAccessoryMonitor : NSObject

@property (retain, nonatomic) NSMapTable *accessories; // ivar: _accessories
@property (readonly, weak, nonatomic) NSObject<HMDSiriAccessoryMonitorDelegate> *delegate; // ivar: _delegate


-(BOOL)hasAnyActiveTargetingAccessories;
-(id)_accessoriesTargetingAccessory:(id)arg0 ;
-(id)_getInfoForAccessory:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addAccessory:(id)arg0 withTarget:(id)arg1 ;
-(void)_removeAccessory:(id)arg0 ;
-(void)accessory:(id)arg0 setSupportsDragonSiri:(BOOL)arg1 ;
-(void)setTargetableAccessory:(id)arg0 withControllers:(id)arg1 ;


@end


#endif