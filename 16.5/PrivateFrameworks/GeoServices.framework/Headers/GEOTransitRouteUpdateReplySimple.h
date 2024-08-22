// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEUPDATEREPLYSIMPLE_H
#define GEOTRANSITROUTEUPDATEREPLYSIMPLE_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"
#import "GEOTransitRouteUpdateResponse.h"

@interface GEOTransitRouteUpdateReplySimple : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOTransitRouteUpdateResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif