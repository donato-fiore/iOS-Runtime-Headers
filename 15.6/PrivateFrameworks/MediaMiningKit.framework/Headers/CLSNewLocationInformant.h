// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNEWLOCATIONINFORMANT_H
#define CLSNEWLOCATIONINFORMANT_H



#import "CLSInformant.h"

@interface CLSNewLocationInformant : CLSInformant



+(BOOL)doesRegion:(id)arg0 containLocation:(id)arg1 ;
+(BOOL)doesRegion:(id)arg0 intersectOtherRegion:(id)arg1 ;
+(BOOL)location:(struct CLLocationCoordinate2D )arg0 isCloseToLocation:(struct CLLocationCoordinate2D )arg1 ;
+(BOOL)location:(struct CLLocationCoordinate2D )arg0 isFarFromLocation:(struct CLLocationCoordinate2D )arg1 ;
+(id)_categoriesDescriptionFromCategories:(id)arg0 ;
+(id)areaOfInterestCategories;
+(id)businessItemsForRegion:(id)arg0 ;
+(id)classIdentifier;
+(id)createPlaceForBusinessItem:(id)arg0 ;
+(id)familyIdentifier;
+(id)filterBusinessItems:(id)arg0 forCategories:(id)arg1 subCategories:(id)arg2 blocklistCategories:(id)arg3 ;
+(id)informantDependenciesIdentifiers;
+(id)natureCategories;
+(id)pointOfInterestCategories;
+(id)regionOfInterestCategories;
+(id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D )arg0 forCategories:(id)arg1 precision:(CGFloat)arg2 inCache:(id)arg3 ;
+(id)shiftedLocationFromOriginalLocation:(id)arg0 ;
+(struct CLLocationCoordinate2D )shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D )arg0 ;
-(id)_pointOfInterestTraits;
-(id)_regionOfInterestCategories;
-(id)_regionOfInterestTraits;
-(id)gatherCluesForInvestigation:(id)arg0 progressBlock:(id)arg1 ;
-(id)locationAreaOfInterestCluesForInputClue:(id)arg0 ;
-(id)locationPointOfInterestCluesForInputClue:(id)arg0 ;
-(id)locationRegionOfInterestCluesForInputClue:(id)arg0 ;
-(id)outputLocationCluesForOuputClueKey:(id)arg0 inputClue:(id)arg1 region:(id)arg2 traits:(id)arg3 categories:(id)arg4 exactMatch:(BOOL)arg5 precision:(CGFloat)arg6 cache:(id)arg7 ;


@end


#endif