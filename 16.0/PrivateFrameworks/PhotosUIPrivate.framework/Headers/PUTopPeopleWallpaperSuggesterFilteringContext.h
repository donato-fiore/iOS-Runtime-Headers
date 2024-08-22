// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTERFILTERINGCONTEXT_H
#define PUTOPPEOPLEWALLPAPERSUGGESTERFILTERINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface PUTopPeopleWallpaperSuggesterFilteringContext : NSObject

@property (nonatomic) BOOL favoritePersonsAreVIPs; // ivar: _favoritePersonsAreVIPs
@property (nonatomic) CGFloat maximumFaceRoll; // ivar: _maximumFaceRoll
@property (nonatomic) CGFloat maximumFaceSize; // ivar: _maximumFaceSize
@property (nonatomic) CGFloat minimumCropScore; // ivar: _minimumCropScore
@property (nonatomic) CGFloat minimumFaceQuality; // ivar: _minimumFaceQuality
@property (nonatomic) CGFloat minimumFaceSize; // ivar: _minimumFaceSize
@property (nonatomic) NSUInteger minimumNumberOfCandidatesForEligiblePerson; // ivar: _minimumNumberOfCandidatesForEligiblePerson
@property (nonatomic) CGFloat minimumWallpaperScore; // ivar: _minimumWallpaperScore
@property (nonatomic) CGFloat normalizedDeviationForImportantPersons; // ivar: _normalizedDeviationForImportantPersons
@property (nonatomic) CGFloat normalizedDeviationForVeryImportantPersons; // ivar: _normalizedDeviationForVeryImportantPersons
@property (nonatomic) BOOL requiresNoBlink; // ivar: _requiresNoBlink
@property (nonatomic) BOOL requiresOutdoor; // ivar: _requiresOutdoor
@property (nonatomic) BOOL requiresSmile; // ivar: _requiresSmile
@property (nonatomic) CGFloat timeIntervalForCandidateDeduping; // ivar: _timeIntervalForCandidateDeduping


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif