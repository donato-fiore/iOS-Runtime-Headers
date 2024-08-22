// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFOVERLAYIMAGETRANSFORM_H
#define WFOVERLAYIMAGETRANSFORM_H


#import <Foundation/Foundation.h>


@interface WFOverlayImageTransform : NSObject

@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGPoint center; // ivar: _center
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)init;
-(id)initForCenteringImage:(id)arg0 inBackgroundImage:(id)arg1 ;
-(id)initWithCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 opacity:(CGFloat)arg4 ;
-(void)applyToImageFile:(id)arg0 withOverlayImage:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif