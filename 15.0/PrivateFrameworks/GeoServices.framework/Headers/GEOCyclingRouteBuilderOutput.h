// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCYCLINGROUTEBUILDEROUTPUT_H
#define GEOCYCLINGROUTEBUILDEROUTPUT_H



#import "GEORouteBuilderOutput.h"
#import "GEOElevationProfile.h"

@interface GEOCyclingRouteBuilderOutput : GEORouteBuilderOutput {
    GEOElevationProfile *_elevationProfile;
}




-(id)elevationProfile;
-(id)initWithGEORouteBuilderOutput:(id)arg0 ;
-(void)setElevationProfile:(id)arg0 ;


@end


#endif