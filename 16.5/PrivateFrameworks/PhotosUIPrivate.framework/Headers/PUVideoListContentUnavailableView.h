// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUVIDEOLISTCONTENTUNAVAILABLEVIEW_H
#define PUVIDEOLISTCONTENTUNAVAILABLEVIEW_H

@class UIView, NSArray, UILabel;



@interface PUVideoListContentUnavailableView : UIView {
    BOOL _needsUpdateConstraints;
}


@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *messageLabel1; // ivar: _messageLabel1
@property (retain, nonatomic) UILabel *messageLabel2; // ivar: _messageLabel2
@property (nonatomic) CGRect safeAreaLayoutGuideFrameRect; // ivar: _safeAreaLayoutGuideFrameRect


-(id)_messageLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateConstraints;
-(void)_setMessageText:(id)arg0 toLabel:(id)arg1 ;
-(void)_updateConstraintsIfNeeded;
-(void)updateConstraints;


@end


#endif