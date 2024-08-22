// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOORDINATIONPINGNOTIFICATION_H
#define HMDCOORDINATIONPINGNOTIFICATION_H

@class COMeshNotification, NSUUID;



@interface HMDCoordinationPingNotification : COMeshNotification

@property (readonly) NSUUID *primaryResidentUUID; // ivar: _primaryResidentUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryResidentUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif