// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPHOTOSGRAPHPROFILE_H
#define PGPHOTOSGRAPHPROFILE_H

@class CLSProfile;



@interface PGPhotosGraphProfile : CLSProfile



+(BOOL)isBlockedTaxonomyNodeWithName:(id)arg0 ;
+(id)blockedNames;
+(id)blockedNamesToTraverse;
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
-(void)_insertEventCluesForClueCollection:(id)arg0 ;
-(void)_insertPlacesForClueCollection:(id)arg0 ;
-(void)_insertSceneForClueCollection:(id)arg0 ;
-(void)processResultsSynchronouslyForInvestigation:(id)arg0 withProgressBlock:(id)arg1 ;


@end


#endif