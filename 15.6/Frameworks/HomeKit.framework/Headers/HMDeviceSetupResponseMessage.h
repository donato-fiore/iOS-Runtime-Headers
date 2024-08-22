// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDEVICESETUPRESPONSEMESSAGE_H
#define HMDEVICESETUPRESPONSEMESSAGE_H

@class TRResponseMessage, NSData;



@interface HMDeviceSetupResponseMessage : TRResponseMessage

@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif