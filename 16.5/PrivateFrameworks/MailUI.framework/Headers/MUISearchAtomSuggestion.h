// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHATOMSUGGESTION_H
#define MUISEARCHATOMSUGGESTION_H

@class UIImage, NSString, UIColor, NSDate;


#import "MUISearchSuggestion.h"

@interface MUISearchAtomSuggestion : MUISearchSuggestion

@property (readonly, nonatomic) UIImage *atomImage;
@property (readonly, copy, nonatomic) NSString *atomTitle;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) UIColor *focusedTintColor;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) NSDate *lastUsedTime; // ivar: _lastUsedTime
@property (readonly, nonatomic) NSInteger option;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, copy, nonatomic) NSString *title;


+(id)allMailboxesSuggestionFromSpotlightSuggestion:(id)arg0 ;
+(id)log;
+(id)suggestionFromSpotlightSuggestion:(id)arg0 shouldShowAvaters:(BOOL)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)predicateWithSelectedScope:(id)arg0 ;


@end


#endif