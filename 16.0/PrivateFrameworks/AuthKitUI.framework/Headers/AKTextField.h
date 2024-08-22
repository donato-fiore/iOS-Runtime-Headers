// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTEXTFIELD_H
#define AKTEXTFIELD_H

@class UIView, UIImageView, NSMutableArray, UILabel, UIColor, UITextField, UIVisualEffectView;



@interface AKTextField : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (nonatomic) NSInteger blurEffectStyle; // ivar: _blurEffectStyle
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UILabel *entryDescription; // ivar: _entryDescription
@property (retain, nonatomic) UIColor *entryDescriptionTextColor; // ivar: _entryDescriptionTextColor
@property (readonly, nonatomic) UITextField *entryField; // ivar: _entryField
@property (retain, nonatomic) UIColor *entryFieldTextColor; // ivar: _entryFieldTextColor
@property (retain, nonatomic) UIColor *fieldBackgroundColor; // ivar: _fieldBackgroundColor
@property (nonatomic) NSInteger rowIdentifier; // ivar: _rowIdentifier
@property (nonatomic) NSInteger textFieldStyle; // ivar: _textFieldStyle
@property (nonatomic) BOOL usesVibrancy; // ivar: _usesVibrancy
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)_fieldTextColor;
-(id)_setupBackgroundViewConstriants;
-(id)backgroundImage;
-(id)cachedImageUsingBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_drawBackgroundForPathRect:(struct CGRect )arg0 roundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 pathSegments:(int)arg3 ;
-(void)_setupAlertStyleViews;
-(void)_setupInlineEntryStyleViews;
-(void)_setupLabelAndFieldStyles;
-(void)_updateFonts:(id)arg0 ;
-(void)dealloc;
-(void)drawFillForPathRect:(struct CGRect )arg0 roundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 ;
-(void)drawStrokeForPathRect:(struct CGRect )arg0 roundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 pathSegments:(int)arg3 ;


@end


#endif