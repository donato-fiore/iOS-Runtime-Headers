// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSBETAENROLLMENTIDENTIFYRESPONSE_H
#define HPSBETAENROLLMENTIDENTIFYRESPONSE_H

@class COMessageSessionResponse, NSString;
@protocol NSSecureCoding, _TtP15HomePodSettings20DeviceModelMessaging_;



@interface HPSBetaEnrollmentIdentifyResponse : COMessageSessionResponse <NSSecureCoding, _TtP15HomePodSettings20DeviceModelMessaging_>

 {
    ? availability;
    ? groupID;
    ? groupName;
    ? model;
    ? name;
    ? pairID;
    ? pairName;
    ? roomID;
    ? roomName;
    ? state;
}


@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *pairID;
@property (nonatomic, copy) NSString *pairName;
@property (nonatomic, copy) NSString *roomID;
@property (nonatomic, copy) NSString *roomName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif