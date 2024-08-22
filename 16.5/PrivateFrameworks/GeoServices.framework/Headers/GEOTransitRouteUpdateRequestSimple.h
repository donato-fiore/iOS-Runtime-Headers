// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEUPDATEREQUESTSIMPLE_H
#define GEOTRANSITROUTEUPDATEREQUESTSIMPLE_H

@class NSString;
@protocol GEOXPCRequest;


#import "GEOXPCRequest.h"
#import "GEOTransitRouteUpdateRequest.h"

@interface GEOTransitRouteUpdateRequestSimple : GEOXPCRequest <GEOXPCRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOTransitRouteUpdateRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(Class)replyClass;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithTraits:(id)arg0 auditToken:(id)arg1 throttleToken:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif