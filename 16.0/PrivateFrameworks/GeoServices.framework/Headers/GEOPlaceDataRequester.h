// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEDATAREQUESTER_H
#define GEOPLACEDATAREQUESTER_H

@protocol GEOPlaceDataRequester;


#import "GEOServiceRequester.h"

@interface GEOPlaceDataRequester : GEOServiceRequester <GEOPlaceDataRequester>





+(id)sharedInstance;
-(id)_validateResponse:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)startWithRequest:(id)arg0 traits:(id)arg1 timeout:(CGFloat)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif