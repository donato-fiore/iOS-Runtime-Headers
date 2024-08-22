// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSBETAENROLLMENTSTATECHANGERESPONSE_H
#define HPSBETAENROLLMENTSTATECHANGERESPONSE_H

@class COMessageChannelResponse;



@interface HPSBetaEnrollmentStateChangeResponse : COMessageChannelResponse {
    ? state;
    ? success;
    ? error;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif