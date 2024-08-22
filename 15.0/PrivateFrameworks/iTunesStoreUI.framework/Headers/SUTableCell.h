// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTABLECELL_H
#define SUTABLECELL_H

@class UITableViewCell, UIColor, UIBezierPath;


#import "SUTableCellContentView.h"
#import "SUItemOfferButton.h"
#import "SUCellConfiguration.h"

@interface SUTableCell : UITableViewCell {
    SUTableCellContentView *_configurationView;
    BOOL _hideHighlight;
    SUItemOfferButton *_itemOfferButton;
}


@property (retain, nonatomic) UIColor *bottomBorderColor; // ivar: _bottomBorderColor
@property (nonatomic) int clipCorners;
@property (readonly, nonatomic) UIBezierPath *clippingPath;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic) BOOL drawAsDisabled;
@property (nonatomic) NSInteger editState; // ivar: _editState
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (readonly, retain, nonatomic) SUItemOfferButton *itemOfferButton;
@property (nonatomic) ? position; // ivar: _position
@property (nonatomic) BOOL showHighlight;
@property (retain, nonatomic) UIColor *topBorderColor; // ivar: _topBorderColor
@property (nonatomic) BOOL usesSubviews;


-(BOOL)_canDrawContent;
-(id)copyPurchaseAnimationView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg0 ;


@end


#endif