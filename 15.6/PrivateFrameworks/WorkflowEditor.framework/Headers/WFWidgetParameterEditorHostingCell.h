// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETPARAMETEREDITORHOSTINGCELL_H
#define WFWIDGETPARAMETEREDITORHOSTINGCELL_H

@class UIColor, MTVisualStylingProvider, UIView;


#import "WFParameterEditorHostingCell.h"
#import "WFComponentNavigationContextImpl.h"

@interface WFWidgetParameterEditorHostingCell : WFParameterEditorHostingCell

@property (retain, nonatomic) UIColor *cardBackgroundColor; // ivar: _cardBackgroundColor
@property (retain, nonatomic) MTVisualStylingProvider *fillProvider; // ivar: _fillProvider
@property (retain, nonatomic) UIView *highlighedBackgroundView; // ivar: _highlighedBackgroundView
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) WFComponentNavigationContextImpl *navigationContext; // ivar: _navigationContext
@property (retain, nonatomic) UIColor *overridingBackgroundColor; // ivar: _overridingBackgroundColor
@property (retain, nonatomic) MTVisualStylingProvider *strokeProvider; // ivar: _strokeProvider


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)applyStylingWithStrokeProvider:(id)arg0 fillProvider:(id)arg1 cardBackgroundColor:(id)arg2 ;
-(void)reconfigureModernView;
-(void)setContainingViewController:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif