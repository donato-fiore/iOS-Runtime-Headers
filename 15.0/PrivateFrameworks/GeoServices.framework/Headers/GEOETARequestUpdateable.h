// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOETAREQUESTUPDATEABLE_H
#define GEOETAREQUESTUPDATEABLE_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEODataConditionalConnectionProperties.h"
#import "GEOETATrafficUpdateRequest.h"

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest>



@property (retain, nonatomic) GEODataConditionalConnectionProperties *connectionProperties; // ivar: _connectionProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif