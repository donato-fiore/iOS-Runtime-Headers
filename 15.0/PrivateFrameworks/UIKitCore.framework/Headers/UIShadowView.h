// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISHADOWVIEW_H
#define UISHADOWVIEW_H



#import "UIView.h"
#import "UIImage.h"

@interface UIShadowView : UIView {
    UIImage *_image;
}




+(id)bottomShadowImage;
+(id)topShadowImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setShadowImage:(id)arg0 forEdge:(NSUInteger)arg1 inside:(BOOL)arg2 ;


@end


#endif