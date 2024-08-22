// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTEUITABLEVIEWSUBTITLEANDVALUECELL_H
#define REMOTEUITABLEVIEWSUBTITLEANDVALUECELL_H

@class UILabel;


#import "RemoteUITableViewCell.h"

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {
    UILabel *_valueLabel;
}




-(id)effectiveDetailTextLabel;
-(id)effectiveValueTextLabel;
-(id)valueLabel;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_adjustFrameOfView:(id)arg0 distance:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif