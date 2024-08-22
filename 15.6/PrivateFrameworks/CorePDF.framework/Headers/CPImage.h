// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPIMAGE_H
#define CPIMAGE_H



#import "CPGraphicObject.h"

@interface CPImage : CPGraphicObject {
    ? imageData;
    BOOL renderedBoundsComputed;
}




-(?)initWithPDFImage;
-(BOOL)isVisible;
-(NSInteger)zOrder;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(struct CGRect )bounds;
-(struct CGRect )renderedBounds;
-(struct CPPDFImage *)imageData;
-(void)accept:(id)arg0 ;
-(void)recomputeRenderedBounds;


@end


#endif