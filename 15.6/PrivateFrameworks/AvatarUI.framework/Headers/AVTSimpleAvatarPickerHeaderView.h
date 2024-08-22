// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSIMPLEAVATARPICKERHEADERVIEW_H
#define AVTSIMPLEAVATARPICKERHEADERVIEW_H

@class UICollectionReusableView, NSString, UIImageSymbolConfiguration;


#import "AVTCircularButton.h"

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView

@property (readonly, nonatomic) AVTCircularButton *button; // ivar: _button
@property (copy, nonatomic) id *buttonPressedBlock; // ivar: _buttonPressedBlock
@property (retain, nonatomic) NSString *currentSymbolName; // ivar: _currentSymbolName
@property (retain, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration; // ivar: _ellipsisSymbolConfiguration
@property (retain, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration; // ivar: _plusSymbolConfiguration


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonPressed:(id)arg0 ;
-(void)setupLayout;
-(void)updateForEditMode:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateWithSymbolNamed:(id)arg0 configuration:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif