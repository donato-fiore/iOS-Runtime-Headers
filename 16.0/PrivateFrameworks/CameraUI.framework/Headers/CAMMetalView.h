// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMETALVIEW_H
#define CAMMETALVIEW_H

@class UIView, CAMetalLayer;
@protocol CAMMetalViewDelegate;



@interface CAMMetalView : UIView

@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (retain, nonatomic) NSObject<CAMMetalViewDelegate> *metalViewDelegate; // ivar: _metalViewDelegate


+(Class)layerClass;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif