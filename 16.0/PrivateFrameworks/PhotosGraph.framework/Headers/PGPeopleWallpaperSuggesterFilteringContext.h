// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPEOPLEWALLPAPERSUGGESTERFILTERINGCONTEXT_H
#define PGPEOPLEWALLPAPERSUGGESTERFILTERINGCONTEXT_H



#import "PGSinglePersonWallpaperAssetSuggesterFilteringContext.h"

@interface PGPeopleWallpaperSuggesterFilteringContext : PGSinglePersonWallpaperAssetSuggesterFilteringContext

@property (nonatomic) BOOL favoritePersonsAreVIPs; // ivar: _favoritePersonsAreVIPs
@property (nonatomic) NSUInteger minimumNumberOfCandidatesForEligiblePerson; // ivar: _minimumNumberOfCandidatesForEligiblePerson
@property (nonatomic) NSInteger minimumPersonImportance; // ivar: _minimumPersonImportance
@property (nonatomic) CGFloat normalizedDeviationForImportantPersons; // ivar: _normalizedDeviationForImportantPersons
@property (nonatomic) CGFloat normalizedDeviationForVeryImportantPersons; // ivar: _normalizedDeviationForVeryImportantPersons


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initForPeople;
-(id)initForTopPeople;
-(id)initForTopPeople:(BOOL)arg0 withDictionary:(id)arg1 ;


@end


#endif