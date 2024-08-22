// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEREQUESTMESSAGE_H
#define GEOPLACEREQUESTMESSAGE_H

@class NSString, NSUUID;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEOPDPlaceRequest.h"

@interface GEOPlaceRequestMessage : GEOXPCRequest <GEOXPCRequest>



@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOPDPlaceRequest *request; // ivar: _request
@property (retain, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif