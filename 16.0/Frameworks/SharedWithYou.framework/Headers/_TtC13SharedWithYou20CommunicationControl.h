// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SHAREDWITHYOU20COMMUNICATIONCONTROL_H
#define _TTC13SHAREDWITHYOU20COMMUNICATIONCONTROL_H

@class UIControl, UILabel;



@interface _TtC13SharedWithYou20CommunicationControl : UIControl {
    ? touchUpInsideActionIdentifier;
    ? communicationChannel;
    ? contentView;
    ? imageView;
    ? sBehaviors;
    ? menu;
    ? enablementLock;
}


@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, readonly) UILabel *label; // ivar: label


-(BOOL)isEnabled;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif