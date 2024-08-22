// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI17SECTIONFOOTERVIEW_H
#define _TTC12GAMECENTERUI17SECTIONFOOTERVIEW_H

@class TtC12GameCenterUI26BaseCollectionReusableView;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI17SectionFooterView : TtC12GameCenterUI26BaseCollectionReusableView {
    ? footerLabel;
    ? attachmentView;
    ? tapGestureRecognizer;
    ? style;
    ? attachment;
    ? labelTapAction;
    ? attachmentTapAction;
    ? separator;
}


@property (nonatomic, readonly) BOOL accessibilityAttachmentHasAction;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityFooterLabel;
@property (nonatomic, readonly) BOOL accessibilityLabelHasAction;
@property (nonatomic) UIEdgeInsets layoutMargins;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)handleTapWithGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif