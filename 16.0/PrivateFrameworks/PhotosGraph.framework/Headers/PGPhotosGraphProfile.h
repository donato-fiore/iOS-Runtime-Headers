// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPHOTOSGRAPHPROFILE_H
#define PGPHOTOSGRAPHPROFILE_H

@class CLSProfile, NSSet;



@interface PGPhotosGraphProfile : CLSProfile {
    NSSet *_blockedTaxonomyNodeNames;
}




+(id)_blockedNames;
+(id)_blockedNamesToTraverse;
+(id)_computeBlockedTaxonomyNodeNamesWithSceneTaxonomy:(id)arg0 ;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)partOfDayAfternoon;
+(id)partOfDayEvening;
+(id)partOfDayMorning;
+(id)partOfDayNight;
+(id)partOfDayNoon;
+(id)poiActivity;
+(id)poiAmusementPark;
+(id)poiCulture;
+(id)poiDiving;
+(id)poiEntertainment;
+(id)poiFitness;
+(id)poiHiking;
+(id)poiHospital;
+(id)poiMuseum;
+(id)poiNightlife;
+(id)poiPark;
+(id)poiPerformance;
+(id)poiRestaurant;
+(id)poiShopping;
+(id)poiStadium;
+(id)poiTravel;
+(id)poiUnknown;
+(id)profileDependenciesIdentifiers;
+(id)roiBeach;
+(id)roiMoutain;
+(id)roiNature;
+(id)roiUrban;
+(id)roiWater;
+(id)supportedMeaningClueKeys;
-(BOOL)isBlockedTaxonomyNodeWithName:(id)arg0 ;
-(id)initWithSceneTaxonomy:(id)arg0 ;
-(void)_insertEventCluesForClueCollection:(id)arg0 ;
-(void)_insertPlacesForClueCollection:(id)arg0 ;
-(void)_insertSceneForClueCollection:(id)arg0 ;
-(void)processResultsSynchronouslyForInvestigation:(id)arg0 withProgressBlock:(id)arg1 ;


@end


#endif