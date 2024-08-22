// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT27SYSTEMAPERTURECONTAINERVIEW_H
#define _TTC15CONVERSATIONKIT27SYSTEMAPERTURECONTAINERVIEW_H

@class UIView;
@protocol SBUISystemApertureAccessoryView;



@interface _TtC15ConversationKit27SystemApertureContainerView : UIView <SBUISystemApertureAccessoryView>

 {
    ? content;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forLayoutMode:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif