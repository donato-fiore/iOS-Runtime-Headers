// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOXPCDIRECTIONSREQUEST_H
#define GEOXPCDIRECTIONSREQUEST_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEODirectionsRequest.h"

@interface GEOXPCDirectionsRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest; // ivar: _directionsRequest
@property (readonly) NSUInteger hash;
@property (nonatomic) int priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) BOOL useBackgroundURL; // ivar: _useBackgroundURL


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif