// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT40SYSTEMAPERTUREINCALLWAVEFORMTRAILINGVIEW_H
#define _TTC15CONVERSATIONKIT40SYSTEMAPERTUREINCALLWAVEFORMTRAILINGVIEW_H

@class UIView;
@protocol SBUISystemApertureAccessoryView;



@interface _TtC15ConversationKit40SystemApertureInCallWaveformTrailingView : UIView <SBUISystemApertureAccessoryView>

 {
    ? viewModel;
    ? cancellables;
    ? animateUpdatesPassthrough;
    ? $__lazy_storage_$_backdropLayer;
    ? $__lazy_storage_$_localAudioView;
    ? $__lazy_storage_$_remoteAudioView;
}


@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forLayoutMode:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif