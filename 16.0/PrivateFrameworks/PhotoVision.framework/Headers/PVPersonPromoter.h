// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVPERSONPROMOTER_H
#define PVPERSONPROMOTER_H

@class NSMutableDictionary, NSNumber;
@protocol PVPersonPromoterDelegate, PVPhotoLibraryProtocol;

#import <Foundation/Foundation.h>

#import "PVPersonDeduperProfile.h"
#import "PVPersonClusterManager.h"
#import "PVPersonPromoterProfile.h"

@interface PVPersonPromoter : NSObject

@property (retain, nonatomic) PVPersonDeduperProfile *deduperProfile; // ivar: _deduperProfile
@property (weak, nonatomic) NSObject<PVPersonPromoterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float faceProcessingProgress; // ivar: _faceProcessingProgress
@property (readonly, nonatomic) NSMutableDictionary *metricsReport; // ivar: _metricsReport
@property (retain, nonatomic) PVPersonClusterManager *personClusterManager; // ivar: _personClusterManager
@property (retain, nonatomic) NSObject<PVPhotoLibraryProtocol> *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PVPersonPromoterProfile *promoterProfile; // ivar: _promoterProfile
@property (retain, nonatomic) NSNumber *quiescentState; // ivar: _quiescentState


+(BOOL)_writePersonPromoterInformation:(id)arg0 atURL:(id)arg1 ;
+(BOOL)hasProcessedForLibrary:(id)arg0 ;
+(BOOL)isEnabled;
+(NSUInteger)numberOfFacesProcessedOnLastRunAtURL:(id)arg0 ;
+(id)_personPromoterInformationAtURL:(id)arg0 ;
+(id)requestSuggestedMePersonIdentifierAtURL:(id)arg0 withError:(*id)arg1 ;
+(void)cumulativeNormalDistributionWithData:(id)arg0 sigmaFactor:(CGFloat)arg1 usingBlock:(id)arg2 ;
+(void)probabilityDensityNormalDistributionWithData:(id)arg0 sigmaFactor:(CGFloat)arg1 usingBlock:(id)arg2 ;
+(void)setProcessed:(BOOL)arg0 forLibrary:(id)arg1 ;
-(BOOL)_personClusterShouldBeVerified:(id)arg0 ;
-(BOOL)_promoteInterestingPersons:(id)arg0 updateBlock:(id)arg1 ;
-(BOOL)_updateSuggestedMeIdentifierWithPersons:(id)arg0 updateBlock:(id)arg1 ;
-(BOOL)isInQuiescentState;
-(BOOL)promoteUnverifiedPersonsWithUpdateBlock:(id)arg0 ;
-(CGFloat)_personTimespan:(id)arg0 ;
-(id)_graphOrderedPersonsWithPersons:(id)arg0 withAllPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)_interestingPersonsFromVerifiedPersons:(id)arg0 unverifiedPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)_newPersonDeduperWithVerifiedPersons:(id)arg0 ;
-(id)_promoteUnverifiedPersons:(id)arg0 withVerifiedPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)_sortedSocialGroups:(id)arg0 withPersonsByLocalIdentifier:(id)arg1 ;
-(id)_sortedUnverifiedPersonsToDedupForVerifiedPersons:(id)arg0 type:(NSUInteger)arg1 updateBlock:(id)arg2 ;
-(id)_verifiedPersonsToProcess;
-(id)advancedStatus;
-(id)evaluatePersonPromoterWithUpdateBlock:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 andDelegate:(id)arg1 ;
-(id)interestingPersonsFromPersons:(id)arg0 updateBlock:(id)arg1 ;
-(void)incrementMetricForKey:(id)arg0 withValue:(NSUInteger)arg1 ;
-(void)reportMetrics;


@end


#endif