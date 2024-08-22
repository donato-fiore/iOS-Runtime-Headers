// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTODAPLAN_H
#define CTODAPLAN_H

@class NSString;


#import "CTPlan.h"

@interface CTODAPlan : CTPlan

@property (readonly, nonatomic) NSString *gid1; // ivar: _gid1
@property (readonly, nonatomic) NSString *gid2; // ivar: _gid2
@property (readonly, nonatomic) NSString *handoffToken; // ivar: _handoffToken
@property (readonly, nonatomic) NSString *mcc; // ivar: _mcc
@property (readonly, nonatomic) NSString *mnc; // ivar: _mnc
@property (readonly, nonatomic) NSString *setupURL; // ivar: _setupURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupUrl:(id)arg0 mcc:(id)arg1 mnc:(id)arg2 gid1:(id)arg3 gid2:(id)arg4 handoffToken:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif