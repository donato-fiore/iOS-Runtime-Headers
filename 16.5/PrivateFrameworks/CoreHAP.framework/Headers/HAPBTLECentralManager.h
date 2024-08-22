// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBTLECENTRALMANAGER_H
#define HAPBTLECENTRALMANAGER_H

@class HMFObject, CBCentralManager, NSString, NSMutableSet;
@protocol CBCentralManagerDelegate, OS_dispatch_queue;



@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate>



@property (retain, nonatomic) CBCentralManager *centralManager; // ivar: centralManager
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *delegates; // ivar: delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger state; // ivar: state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: workQueue


+(id)getInstance;
-(id)_getCentralManager;
-(id)init;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)registerCentralManagerDelegate:(id)arg0 ;


@end


#endif