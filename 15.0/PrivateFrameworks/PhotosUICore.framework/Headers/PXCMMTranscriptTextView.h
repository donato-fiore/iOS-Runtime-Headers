// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMTRANSCRIPTTEXTVIEW_H
#define PXCMMTRANSCRIPTTEXTVIEW_H

@class UIView, UILabel, NSString;


#import "PXUpdater.h"

@interface PXCMMTranscriptTextView : UIView {
    PXUpdater *_updater;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}


@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInSize:(struct CGSize )arg0 minimizingSize:(BOOL)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatePrimaryLabel;
-(void)_updateSecondaryLabel;
-(void)layoutSubviews;


@end


#endif