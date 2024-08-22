// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCO15HOMEPODSETTINGS13CARRYSETTINGS14VERIFYRESPONSE_H
#define _TTCO15HOMEPODSETTINGS13CARRYSETTINGS14VERIFYRESPONSE_H

@class COMessageChannelResponse;



@interface _TtCO15HomePodSettings13CarrySettings14VerifyResponse : COMessageChannelResponse {
    ? error;
    ? success;
    ? type;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif