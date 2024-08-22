// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPATIALLOOKUPREQUESTER_H
#define GEOSPATIALLOOKUPREQUESTER_H



#import "GEOServiceRequester.h"

@interface GEOSpatialLookupRequester : GEOServiceRequester



+(id)sharedInstance;
-(id)_validateResponse:(id)arg0 ;
-(void)cancelRequest:(id)arg0 ;
-(void)startWithRequest:(id)arg0 traits:(id)arg1 timeout:(CGFloat)arg2 auditToken:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif