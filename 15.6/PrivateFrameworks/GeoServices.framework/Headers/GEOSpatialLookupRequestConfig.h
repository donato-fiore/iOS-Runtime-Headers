// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSPATIALLOOKUPREQUESTCONFIG_H
#define GEOSPATIALLOOKUPREQUESTCONFIG_H



#import "GEOServiceRequestDefaultConfig.h"

@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig {
    CGFloat _timeout;
}




-(NSUInteger)urlType;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(struct ? )dataRequestKindForRequest:(id)arg0 traits:(id)arg1 ;


@end


#endif