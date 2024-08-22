// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDSHARINGPICKERLAYOUTATTRIBUTES_H
#define CNMECARDSHARINGPICKERLAYOUTATTRIBUTES_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingPickerLayoutAttributes : NSObject

@property (readonly, nonatomic) CGSize avatarViewSize; // ivar: _avatarViewSize
@property (readonly, nonatomic) CGFloat avatarViewToNamePadding; // ivar: _avatarViewToNamePadding
@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIFont *headerFont; // ivar: _headerFont
@property (readonly, nonatomic) CGFloat topToAvatarPadding; // ivar: _topToAvatarPadding


+(id)buddyHeaderFont;
+(id)layoutAttributesForBuddy;
+(id)layoutAttributesForSettings;
+(id)settingsHeaderFont;
-(id)initWithTopToAvatarPadding:(CGFloat)arg0 headerFont:(id)arg1 avatarViewSize:(struct CGSize )arg2 avatarViewToNamePadding:(CGFloat)arg3 backgroundColor:(id)arg4 ;


@end


#endif