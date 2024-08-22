// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIACHIEVEMENTFORMATTER_H
#define AAUIACHIEVEMENTFORMATTER_H

@class ACHAchievement;

#import <Foundation/Foundation.h>

#import "AAUIAchievementLocalizationProvider.h"

@interface AAUIAchievementFormatter : NSObject

@property (retain, nonatomic) ACHAchievement *achievement; // ivar: _achievement
@property (nonatomic) BOOL formatsForFriend; // ivar: _formatsForFriend
@property (retain, nonatomic) AAUIAchievementLocalizationProvider *locProvider; // ivar: _locProvider
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)shouldShowEarnedShortDescription;
-(id)backsideAttributesWithSizeVariant:(NSInteger)arg0 ;
-(id)descriptionAttributes;
-(id)initWithStyle:(NSInteger)arg0 achievement:(id)arg1 localizationProvider:(id)arg2 ;
-(id)localizedAttributedBacksideString;
-(id)localizedAttributedBacksideStringWithDateSizeVariant:(NSInteger)arg0 ;
-(id)localizedAttributedCombinedString;
-(id)localizedAttributedCombinedStringShowingProgress:(BOOL)arg0 ;
-(id)localizedAttributedCombinedStringWithoutProgress;
-(id)localizedAttributedDescriptionString;
-(id)localizedAttributedShortDescriptionString;
-(id)localizedAttributedShortenedBacksideString;
-(id)localizedAttributedTitleString;
-(id)titleAttributes;


@end


#endif