// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI26FOCUSABLETITLEDAPPICONVIEW_H
#define _TTC12GAMECENTERUI26FOCUSABLETITLEDAPPICONVIEW_H



#import "GKFocusHighlightingCollectionViewCell.h"

@interface _TtC12GameCenterUI26FocusableTitledAppIconView : GKFocusHighlightingCollectionViewCell {
    ? embeddedView;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif