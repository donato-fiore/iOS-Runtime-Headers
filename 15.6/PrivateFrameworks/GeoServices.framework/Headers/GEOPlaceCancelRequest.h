// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACECANCELREQUEST_H
#define GEOPLACECANCELREQUEST_H

@class NSString, NSUUID;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOPlaceCancelRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif