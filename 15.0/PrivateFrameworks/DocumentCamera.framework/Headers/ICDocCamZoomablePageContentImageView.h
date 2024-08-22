// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMZOOMABLEPAGECONTENTIMAGEVIEW_H
#define ICDOCCAMZOOMABLEPAGECONTENTIMAGEVIEW_H

@class UIImageView;
@protocol ICDocCamZoomablePageContentViewDelegate;



@interface ICDocCamZoomablePageContentImageView : UIImageView

@property (weak, nonatomic) NSObject<ICDocCamZoomablePageContentViewDelegate> *pageContentViewDelegate; // ivar: _pageContentViewDelegate


-(id)_accessibilityScrollAncestorForSelector:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif