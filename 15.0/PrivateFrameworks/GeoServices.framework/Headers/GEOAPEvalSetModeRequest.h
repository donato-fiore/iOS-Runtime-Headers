// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPEVALSETMODEREQUEST_H
#define GEOAPEVALSETMODEREQUEST_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"

@interface GEOAPEvalSetModeRequest : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL desiredEnableState; // ivar: _desiredEnableState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif