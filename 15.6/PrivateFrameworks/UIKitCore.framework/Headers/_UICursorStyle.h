// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICURSORSTYLE_H
#define _UICURSORSTYLE_H



#import "UIPointerStyle.h"

@interface _UICursorStyle : UIPointerStyle



+(id)beamStyleWithPreferredLength:(CGFloat)arg0 axis:(NSUInteger)arg1 ;
+(id)styleWithCursor:(id)arg0 constrainedAxes:(NSUInteger)arg1 ;
+(id)styleWithEffect:(id)arg0 cursor:(id)arg1 ;
+(id)styleWithEffect:(id)arg0 preview:(id)arg1 ;
+(id)styleWithHiddenCursor;
+(id)styleWithHoverEffect:(NSInteger)arg0 preview:(id)arg1 ;
+(id)styleWithHoverPreview:(id)arg0 ;
+(id)styleWithShape:(id)arg0 anchorPoint:(struct CGPoint )arg1 ;


@end


#endif