// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSETEXPIRINGKEYREQUEST_H
#define GEOCONFIGSETEXPIRINGKEYREQUEST_H

@class NSString, NSDate;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOConfigSetExpiringKeyRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *expireOSVersion; // ivar: _expireOSVersion
@property (retain, nonatomic) NSDate *expireTime; // ivar: _expireTime
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger keyOptions; // ivar: _keyOptions
@property (retain, nonatomic) NSString *keyString; // ivar: _keyString
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif