// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSTARKFACETIMECELL_H
#define CNSTARKFACETIMECELL_H

@class NSString, UILabel, NSDictionary;
@protocol CNStarkActionViewDelegate, CNPropertyCellDelegate;


#import "CNContactCell.h"
#import "CNStarkActionView.h"

@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate>



@property (readonly, nonatomic) CNStarkActionView *actionView; // ivar: _actionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *faceTimeLabel; // ivar: _faceTimeLabel
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *labelTextAttributes; // ivar: _labelTextAttributes
@property (readonly) Class superclass;


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)shouldShowStar;
-(BOOL)supportsTintColorValue;
-(id)constantConstraints;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)variableConstraints;
-(void)_cnui_applyContactStyle;
-(void)actionViewTapped:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)performDefaultAction;
-(void)setSeparatorStyle:(NSInteger)arg0 ;
-(void)updateTransportButtons;


@end


#endif