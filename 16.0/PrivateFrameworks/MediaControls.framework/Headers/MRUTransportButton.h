// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUTRANSPORTBUTTON_H
#define MRUTRANSPORTBUTTON_H

@class UIView, NSString;


#import "MRUButton.h"
#import "MRUCAPackageView.h"

@interface MRUTransportButton : MRUButton

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat packageScale; // ivar: _packageScale
@property (retain, nonatomic) MRUCAPackageView *packageView; // ivar: _packageView
@property (nonatomic) BOOL showHighlightCircle; // ivar: _showHighlightCircle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearPackage;
-(void)layoutSubviews;
-(void)setAsset:(id)arg0 ;
-(void)setAsset:(id)arg0 animated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)setPackageGlyphState:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundView;
-(void)updateContentView;
-(void)updateVisualStyling;


@end


#endif