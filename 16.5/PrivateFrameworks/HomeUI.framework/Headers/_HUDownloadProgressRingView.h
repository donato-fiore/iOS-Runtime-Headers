// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HUDOWNLOADPROGRESSRINGVIEW_H
#define _HUDOWNLOADPROGRESSRINGVIEW_H

@class UIView;



@interface _HUDownloadProgressRingView : UIView

@property (nonatomic) CGFloat progress; // ivar: _progress


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateShapePath;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif