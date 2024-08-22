// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSROUTEROWVIEW_H
#define CPSROUTEROWVIEW_H

@class UIView, UIImageView, UIStackView, CPRouteChoice;
@protocol CPSRouteRowInteracting;


#import "CPSAbridgableLabel.h"
#import "CPSInvisibleButton.h"

@interface CPSRouteRowView : UIView

@property (readonly, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (readonly, nonatomic) CPSAbridgableLabel *detail; // ivar: _detail
@property (retain, nonatomic) UIView *focusBackground; // ivar: _focusBackground
@property (weak, nonatomic) NSObject<CPSRouteRowInteracting> *interactionDelegate; // ivar: _interactionDelegate
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) CPRouteChoice *representedRouteChoice; // ivar: _representedRouteChoice
@property (retain, nonatomic) CPSInvisibleButton *rowButton; // ivar: _rowButton
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) CPSAbridgableLabel *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAppearance;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)handleRowSelection:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif