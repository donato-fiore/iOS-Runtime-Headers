// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOREQUESTCOUNTERCACHEADDENTRY_H
#define GEOREQUESTCOUNTERCACHEADDENTRY_H

@class NSString, NSDate;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEORequestCounterCacheAddEntry : GEOXPCRequest <GEOXPCRequest>



@property (retain, nonatomic) NSString *appId; // ivar: _appId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int requestKindRaw; // ivar: _requestKindRaw
@property (nonatomic) unsigned char result; // ivar: _result
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif