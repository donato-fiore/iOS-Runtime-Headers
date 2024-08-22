// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFHIDEMYEMAILHEADERVIEW_H
#define MFHIDEMYEMAILHEADERVIEW_H

@class UIStackView, UIListContentView, UIButton, NSString, UIEditMenuInteraction;
@protocol UIEditMenuInteractionDelegate;



@interface MFHideMyEmailHeaderView : UIStackView <UIEditMenuInteractionDelegate>

 {
    UIListContentView *_contentView;
    UIButton *_infoButton;
}


@property (copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIEditMenuInteraction *editInteraction; // ivar: _editInteraction
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 address:(id)arg1 ;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)copy:(id)arg0 ;
-(void)didTriggerEditGesture:(id)arg0 ;
-(void)infoButtonPressed:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif