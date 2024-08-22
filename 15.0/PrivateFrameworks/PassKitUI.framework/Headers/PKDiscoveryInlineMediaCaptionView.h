// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYINLINEMEDIACAPTIONVIEW_H
#define PKDISCOVERYINLINEMEDIACAPTIONVIEW_H

@class UILabel, NSString;


#import "PKDiscoveryShelfView.h"

@interface PKDiscoveryInlineMediaCaptionView : PKDiscoveryShelfView {
    UILabel *_captionLabel;
    NSString *_captionText;
}




-(id)initWithCaptionText:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif