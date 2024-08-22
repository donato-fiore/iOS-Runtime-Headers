// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARDAYCELL_H
#define _UIDATEPICKERCALENDARDAYCELL_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "UICollectionViewCell.h"
#import "UIPointerInteraction.h"

@interface _UIDatePickerCalendarDayCell : UICollectionViewCell <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
    ? _flags;
    NSString *_text;
    NSString *_fontDesign;
    CGSize _lastKnownSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)emphasizedFontForTraitCollection:(id)arg0 fontDesign:(id)arg1 ;
+(id)fontForTraitCollection:(id)arg0 fontDesign:(id)arg1 ;
+(id)reuseIdentifier;
-(BOOL)_wantsRoundedSquare;
-(id)configurationState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)configureWithDay:(id)arg0 formatter:(id)arg1 fontDesign:(id)arg2 outOfRange:(BOOL)arg3 renderOverhangDays:(BOOL)arg4 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif