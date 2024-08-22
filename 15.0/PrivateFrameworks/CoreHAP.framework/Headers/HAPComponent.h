// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPCOMPONENT_H
#define HAPCOMPONENT_H

@class HMFObject;
@protocol HAPBTLECentralManagerDelegate;



@interface HAPComponent : HMFObject

@property (weak, nonatomic) NSObject<HAPBTLECentralManagerDelegate> *centralManagerDelegate; // ivar: centralManagerDelegate


-(id)initWithDelegate:(id)arg0 ;


@end


#endif