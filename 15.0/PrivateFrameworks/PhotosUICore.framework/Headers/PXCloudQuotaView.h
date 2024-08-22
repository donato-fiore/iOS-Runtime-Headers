// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDQUOTAVIEW_H
#define PXCLOUDQUOTAVIEW_H

@class UIView;



@interface PXCloudQuotaView : UIView {
    UIView *_contentView;
}




-(id)_font;
-(id)initWithContentView:(id)arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )contentViewSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif