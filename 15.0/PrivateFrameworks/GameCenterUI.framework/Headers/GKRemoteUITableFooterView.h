// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKREMOTEUITABLEFOOTERVIEW_H
#define GKREMOTEUITABLEFOOTERVIEW_H

@class UIView, NSDictionary, NSString, NSArray;
@protocol RUIPageAccessory, RemoteUITableFooter, GKRemoteUIAuxiliaryViewDelegate;


#import "GKButton.h"

@interface GKRemoteUITableFooterView : UIView <RUIPageAccessory, RemoteUITableFooter>



@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) GKButton *button; // ivar: _button
@property (nonatomic) CGFloat buttonBaselineOffset; // ivar: _buttonBaselineOffset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKRemoteUIAuxiliaryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int layoutStyle; // ivar: _layoutStyle
@property (nonatomic) BOOL pinToBottom; // ivar: _pinToBottom
@property (retain, nonatomic) NSArray *replaceableConstraints; // ivar: _replaceableConstraints
@property (readonly) Class superclass;


-(CGFloat)footerHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)adjustSizeToFillSuperview:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)createButtonWithAttributes:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)objectModelDidChange:(id)arg0 ;
-(void)tableViewDidUpdateContentInset:(id)arg0 ;


@end


#endif