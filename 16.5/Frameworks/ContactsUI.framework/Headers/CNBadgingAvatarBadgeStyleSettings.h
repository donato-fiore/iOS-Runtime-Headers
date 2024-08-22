// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNBADGINGAVATARBADGESTYLESETTINGS_H
#define CNBADGINGAVATARBADGESTYLESETTINGS_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface CNBadgingAvatarBadgeStyleSettings : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (nonatomic) NSInteger cropStyle; // ivar: _cropStyle
@property (nonatomic) NSInteger position; // ivar: _position


+(NSInteger)cnuiBadgePosition:(NSInteger)arg0 ;
+(NSUInteger)cnuiBadgeCropStyle:(NSInteger)arg0 ;
+(id)doNotDisturbBadgeSettings;
+(id)markedForSyndicationBadgeSettings;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)cnuiBadgePosition;
-(NSUInteger)cnuiCropStyle;
-(id)init;
-(id)initWithPosition:(NSInteger)arg0 color:(id)arg1 backgroundColor:(id)arg2 cropStyle:(NSInteger)arg3 ;


@end


#endif