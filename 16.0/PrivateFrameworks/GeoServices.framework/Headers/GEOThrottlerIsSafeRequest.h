// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTHROTTLERISSAFEREQUEST_H
#define GEOTHROTTLERISSAFEREQUEST_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEODataRequestThrottlerToken.h"

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest>



@property (nonatomic) BOOL availableRequestCount; // ivar: _availableRequestCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeToken; // ivar: _includeToken
@property (nonatomic) BOOL nextSafeRequestTime; // ivar: _nextSafeRequestTime
@property (nonatomic) int requestKindSubtype; // ivar: _requestKindSubtype
@property (nonatomic) int requestKindType; // ivar: _requestKindType
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken; // ivar: _throttlerToken


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif