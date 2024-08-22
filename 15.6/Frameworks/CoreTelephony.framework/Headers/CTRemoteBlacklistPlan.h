// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTREMOTEBLACKLISTPLAN_H
#define CTREMOTEBLACKLISTPLAN_H

@class NSString;


#import "CTPlan.h"

@interface CTRemoteBlacklistPlan : CTPlan

@property (readonly, nonatomic) NSString *blacklistEID; // ivar: _blacklistEID
@property (readonly, nonatomic) NSString *blacklistICCID; // ivar: _blacklistICCID
@property (readonly, nonatomic) NSString *blacklistIMEI; // ivar: _blacklistIMEI
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *uploaderEID; // ivar: _uploaderEID
@property (readonly, nonatomic) NSString *uploaderIMEI; // ivar: _uploaderIMEI


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithkey:(id)arg0 blacklistIMEI:(id)arg1 blacklistEID:(id)arg2 blacklistICCID:(id)arg3 uploaderIMEI:(id)arg4 uploaderEID:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif