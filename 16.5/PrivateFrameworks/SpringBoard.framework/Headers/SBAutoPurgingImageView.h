// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAUTOPURGINGIMAGEVIEW_H
#define SBAUTOPURGINGIMAGEVIEW_H

@class UIImageView;



@interface SBAutoPurgingImageView : UIImageView {
    id *_block;
}




-(id)initWithImageGenerationBlock:(id)arg0 ;
-(void)didMoveToWindow;
-(void)setImage:(id)arg0 ;


@end


#endif