// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCO15HOMEPODSETTINGS13CARRYSETTINGS13VERIFYREQUEST_H
#define _TTCO15HOMEPODSETTINGS13CARRYSETTINGS13VERIFYREQUEST_H

@class COMessageChannelRequest;



@interface _TtCO15HomePodSettings13CarrySettings13VerifyRequest : COMessageChannelRequest {
    ? type;
    ? additionalInfo;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif