// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEDATAREQUESTCONFIG_H
#define GEOPLACEDATAREQUESTCONFIG_H

@class NSNumber;


#import "GEOServiceRequestDefaultConfig.h"
#import "GEOPDPlaceRequest.h"

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    CGFloat _timeout;
    NSUInteger _urlType;
    NSNumber *_requestPriority;
    NSUInteger _multipathServiceType;
    GEOPDPlaceRequest *_placeRequest;
    BOOL _usesBackgroundURL;
}




-(BOOL)usesBackgroundURL;
-(CGFloat)timeout;
-(NSUInteger)multipathServiceType;
-(NSUInteger)urlType;
-(id)additionalHTTPHeaders;
-(id)additionalStatesForNetworkEvent;
-(id)initWithTimeout:(CGFloat)arg0 request:(id)arg1 traits:(id)arg2 ;
-(id)serviceTypeNumber;
-(struct ? )dataRequestKindForRequest:(id)arg0 traits:(id)arg1 ;


@end


#endif