// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPBOTTOMBAR_H
#define TPBOTTOMBAR_H

@class UIView;



@interface TPBottomBar : UIView {
    NSInteger _orientation;
    NSInteger _style;
}




+(CGFloat)defaultHeight;
+(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
+(CGFloat)defaultHeightForStyle:(NSInteger)arg0 ;
+(CGFloat)defaultHeightForStyle:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(NSInteger)fullscreenStyle;
+(NSInteger)overlayStyle;
-(NSInteger)orientation;
-(id)init;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setOrientation:(NSInteger)arg0 updateFrame:(BOOL)arg1 ;


@end


#endif