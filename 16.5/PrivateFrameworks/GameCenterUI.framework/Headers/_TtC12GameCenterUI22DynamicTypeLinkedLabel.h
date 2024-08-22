// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI22DYNAMICTYPELINKEDLABEL_H
#define _TTC12GAMECENTERUI22DYNAMICTYPELINKEDLABEL_H

@class TtC12GameCenterUI16DynamicTypeLabel, NSAttributedString;



@interface _TtC12GameCenterUI22DynamicTypeLinkedLabel : TtC12GameCenterUI16DynamicTypeLabel {
    ? items;
    ? tapGestureRecognizer;
    ? linkInteractionDelegate;
}


@property (nonatomic, retain) NSAttributedString *attributedText;


-(id)initWithCoder:(id)arg0 ;
-(void)labelTapped:(id)arg0 ;


@end


#endif