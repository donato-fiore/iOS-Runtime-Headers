// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKREMOTEUITABLEHEADERVIEW_H
#define GKREMOTEUITABLEHEADERVIEW_H

@class UIView, NSDictionary, NSString, NSArray;
@protocol RUIPageAccessory, GKRemoteUIAuxiliaryViewDelegate;


#import "GKButton.h"
#import "GKLabel.h"

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) GKButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKRemoteUIAuxiliaryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) GKLabel *label; // ivar: _label
@property (nonatomic) int layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) NSArray *replaceableConstraints; // ivar: _replaceableConstraints
@property (retain, nonatomic) GKLabel *subLabel; // ivar: _subLabel
@property (readonly) Class superclass;


-(CGFloat)bottomMargin;
-(CGFloat)leftMargin;
-(CGFloat)rightMargin;
-(id)initWithAttributes:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)applyConstraints;
-(void)buttonTapped:(id)arg0 ;
-(void)createButtonWithAttributes:(id)arg0 ;
-(void)createLabelWithAttributes:(id)arg0 ;
-(void)createSubLabelWithAttributes:(id)arg0 ;
-(void)objectModelDidChange:(id)arg0 ;


@end


#endif