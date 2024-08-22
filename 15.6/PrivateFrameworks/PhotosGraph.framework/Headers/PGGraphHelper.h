// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHELPER_H
#define PGGRAPHHELPER_H


#import <Foundation/Foundation.h>


@interface PGGraphHelper : NSObject



+(CGFloat)_confidenceForMePersonLocalIdentifier:(id)arg0 withPersonClusters:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_createSocialGraphWithPersonClusterManager:(id)arg0 persons:(id)arg1 moments:(id)arg2 inferredMePersonLocalIdentifier:(*id)arg3 updateBlock:(id)arg4 ;
+(id)_socialGroupsLocalIdentifiersInGraph:(id)arg0 includeMeNode:(BOOL)arg1 includeCouples:(BOOL)arg2 includeInvalid:(BOOL)arg3 ;
+(id)densityClusteringForObjects:(id)arg0 maximumDistance:(CGFloat)arg1 minimumNumberOfObjects:(NSUInteger)arg2 withDistanceBlock:(id)arg3 ;
+(id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;
+(id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;
+(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg0 forPersons:(id)arg1 updateBlock:(id)arg2 ;


@end


#endif