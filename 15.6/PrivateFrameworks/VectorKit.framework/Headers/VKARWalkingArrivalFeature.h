// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKARWALKINGARRIVALFEATURE_H
#define VKARWALKINGARRIVALFEATURE_H

@class GEOARInfo, NSArray, GEOFeatureStyleAttributes;


#import "VKARWalkingFeature.h"

@interface VKARWalkingArrivalFeature : VKARWalkingFeature {
    GEOARInfo *_arInfo;
}


@property (readonly, nonatomic) NSArray *storeFronts; // ivar: _storeFronts
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // ivar: _styleAttributes


-(BOOL)isEqual:(id)arg0 ;
-(id)_stringForAttributes;
-(id)description;
// -(id)initWithARInfo:(id)arg0 undulationProvider:(id)arg1 iconStyleAttributes:(unk)arg2  ;
-(id)initWithGeocentricPosition:(struct Geocentric<double> )arg0 iconStyleAttributes:(id)arg1 ;
-(id)initWithPosition:(struct ? )arg0 iconStyleAttributes:(id)arg1 ;
-(id)initWithStoreFront:(id)arg0 iconStyleAttributes:(id)arg1 ;
-(id)initWithStoreFronts:(id)arg0 iconStyleAttributes:(id)arg1 ;
-(void)dealloc;


@end


#endif