// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSDEVICECONTEXT_H
#define DSDEVICECONTEXT_H

@class CBDevice, NSString;

#import <Foundation/Foundation.h>


@interface DSDeviceContext : NSObject

@property (copy, nonatomic) CBDevice *bleDevice; // ivar: _bleDevice
@property (nonatomic) NSUInteger changedFlag; // ivar: _changedFlag
@property (nonatomic) unsigned char coordinationStatus; // ivar: _coordinationStatus
@property (nonatomic) NSUInteger discoveryFlag; // ivar: _discoveryFlag
@property (nonatomic) NSUInteger dsActionIsAlreadyFound; // ivar: _dsActionIsAlreadyFound
@property (nonatomic) NSUInteger dsInfoIsAlreadyFound; // ivar: _dsInfoIsAlreadyFound
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) unsigned char tiebreaker; // ivar: _tiebreaker
@property (nonatomic) unsigned char vehicleConfidence; // ivar: _vehicleConfidence
@property (nonatomic) unsigned char vehicleState; // ivar: _vehicleState


-(id)initWithCBDevice:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeSelf:(id)arg0 ;
-(void)updateWithCBDevice:(id)arg0 ;


@end


#endif