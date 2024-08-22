// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIDECARDISPLAYSENDINGDEVICESESSIONSTATE_H
#define SIDECARDISPLAYSENDINGDEVICESESSIONSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SidecarDevice.h"

@interface SidecarDisplaySendingDeviceSessionState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SidecarDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger sessionState; // ivar: _sessionState


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sessionState:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif