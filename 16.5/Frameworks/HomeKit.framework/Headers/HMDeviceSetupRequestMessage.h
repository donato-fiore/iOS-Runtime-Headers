// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVICESETUPREQUESTMESSAGE_H
#define HMDEVICESETUPREQUESTMESSAGE_H

@class TRRequestMessage, NSData;



@interface HMDeviceSetupRequestMessage : TRRequestMessage

@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif