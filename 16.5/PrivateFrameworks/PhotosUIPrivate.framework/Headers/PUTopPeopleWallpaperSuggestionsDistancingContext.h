// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDISTANCINGCONTEXT_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDISTANCINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface PUTopPeopleWallpaperSuggestionsDistancingContext : NSObject

@property (nonatomic) CGFloat locationFactor; // ivar: _locationFactor
@property (nonatomic) CGFloat locationPivot; // ivar: _locationPivot
@property (nonatomic) NSUInteger maximumNumberOfSuggestionsWithPeople; // ivar: _maximumNumberOfSuggestionsWithPeople
@property (nonatomic) NSUInteger maximumNumberOfSuggestionsWithoutPeople; // ivar: _maximumNumberOfSuggestionsWithoutPeople
@property (nonatomic) CGFloat peopleFactor; // ivar: _peopleFactor
@property (nonatomic) CGFloat peoplePivot; // ivar: _peoplePivot
@property (nonatomic) CGFloat sceneprintFactor; // ivar: _sceneprintFactor
@property (nonatomic) CGFloat sceneprintPivot; // ivar: _sceneprintPivot
@property (nonatomic) CGFloat timeFactor; // ivar: _timeFactor
@property (nonatomic) CGFloat timePivot; // ivar: _timePivot


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif