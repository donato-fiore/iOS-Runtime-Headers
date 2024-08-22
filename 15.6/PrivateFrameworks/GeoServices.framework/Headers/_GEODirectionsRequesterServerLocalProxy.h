// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEODIRECTIONSREQUESTERSERVERLOCALPROXY_H
#define _GEODIRECTIONSREQUESTERSERVERLOCALPROXY_H

@class NSString;
@protocol _GEODirectionsRequesterServerProxy;


#import "GEOServiceRequester.h"

@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester <_GEODirectionsRequesterServerProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_validateResponse:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
// -(void)startRequest:(id)arg0 auditToken:(id)arg1 useBackgroundURL:(BOOL)arg2 requestPriority:(id)arg3 callbackQueue:(id)arg4 finished:(id)arg5 networkActivity:(unk)arg6 error:(id)arg7  ;


@end


#endif