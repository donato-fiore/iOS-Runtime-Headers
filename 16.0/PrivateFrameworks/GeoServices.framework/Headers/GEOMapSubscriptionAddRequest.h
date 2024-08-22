// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPSUBSCRIPTIONADDREQUEST_H
#define GEOMAPSUBSCRIPTIONADDREQUEST_H

@class NSString, NSDate;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEOMapRegion.h"

@interface GEOMapSubscriptionAddRequest : GEOXPCRequest <GEOXPCRequest>



@property (nonatomic) NSUInteger dataTypes; // ivar: _dataTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger policy; // ivar: _policy
@property (retain, nonatomic) GEOMapRegion *region; // ivar: _region
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif