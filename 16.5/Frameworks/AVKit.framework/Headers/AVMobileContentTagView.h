// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECONTENTTAGVIEW_H
#define AVMOBILECONTENTTAGVIEW_H

@class UIView, UILabel;


#import "AVMobileContentTag.h"
#import "AVMobileChromelessControlsStyleSheet.h"

@interface AVMobileContentTagView : UIView {
    UIView *_contentView;
    UILabel *_contentTagViewLabel;
}


@property (retain, nonatomic) AVMobileContentTag *contentTag; // ivar: _contentTag
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // ivar: _styleSheet


-(id)initWithContentTag:(id)arg0 withStyleSheet:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif