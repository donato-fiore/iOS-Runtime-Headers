// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSSCORINGCONTEXT_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSSCORINGCONTEXT_H


#import <Foundation/Foundation.h>


@interface PUTopPeopleWallpaperSuggestionsScoringContext : NSObject

@property (nonatomic) CGFloat aestheticFactor; // ivar: _aestheticFactor
@property (nonatomic) CGFloat atHomeOrWorkFactor; // ivar: _atHomeOrWorkFactor
@property (nonatomic) CGFloat croppingFactor; // ivar: _croppingFactor
@property (nonatomic) CGFloat favoriteFactor; // ivar: _favoriteFactor
@property (nonatomic) CGFloat interactionFactor; // ivar: _interactionFactor
@property (nonatomic) CGFloat maximumSizeAllowedForFaces; // ivar: _maximumSizeAllowedForFaces
@property (nonatomic) CGFloat meaningFactor; // ivar: _meaningFactor
@property (nonatomic) CGFloat peopleFactor; // ivar: _peopleFactor
@property (nonatomic) CGFloat wallpaperFactor; // ivar: _wallpaperFactor


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif