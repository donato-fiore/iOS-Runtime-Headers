// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGRAPHICSRENDERER_H
#define UIGRAPHICSRENDERER_H


#import <Foundation/Foundation.h>

#import "_UIReusePool.h"
#import "UIGraphicsRendererFormat.h"

@interface UIGraphicsRenderer : NSObject {
    _UIReusePool *_reusePool;
}


@property (readonly, nonatomic) BOOL allowsImageOutput;
@property (readonly, nonatomic) UIGraphicsRendererFormat *format; // ivar: _format


+(BOOL)_supportsContextReuse;
+(Class)rendererContextClass;
+(struct CGContext *)_contextWithFormat:(id)arg0 renderer:(id)arg1 ;
+(struct CGContext *)contextWithFormat:(id)arg0 ;
+(void)_destroyCGContext:(struct CGContext *)arg0 withRenderer:(id)arg1 ;
+(void)prepareCGContext:(struct CGContext *)arg0 withRendererContext:(id)arg1 ;
// -(BOOL)runDrawingActions:(id)arg0 completionActions:(unk)arg1 error:(id)arg2  ;
// -(BOOL)runDrawingActions:(id)arg0 completionActions:(unk)arg1 format:(id)arg2 error:(unk)arg3  ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 format:(id)arg1 ;
-(id)initWithFormat:(id)arg0 bounds:(struct CGRect )arg1 ;
-(struct CGContext *)_dequeueContextForReuse;
-(void)_configureReuseState;
-(void)_enqueueContextForReuse:(struct CGContext *)arg0 ;
-(void)_prepareContextForReuse:(struct CGContext *)arg0 ;
-(void)popContext:(id)arg0 ;
-(void)pushContext:(id)arg0 ;


@end


#endif