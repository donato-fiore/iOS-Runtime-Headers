// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGRAPHICSRENDERERCONTEXT_H
#define UIGRAPHICSRENDERERCONTEXT_H


#import <Foundation/Foundation.h>

#import "UIGraphicsRendererFormat.h"

@interface UIGraphicsRendererContext : NSObject {
    *CGContext _backingContext;
}


@property (readonly, nonatomic) *CGContext CGContext;
@property (nonatomic) BOOL __createsImages; // ivar: ___createsImages
@property (readonly, nonatomic) UIGraphicsRendererFormat *format; // ivar: _format


-(id)initWithCGContext:(struct CGContext *)arg0 format:(id)arg1 ;
-(void)clipToRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)fillRect:(struct CGRect )arg0 ;
-(void)fillRect:(struct CGRect )arg0 blendMode:(int)arg1 ;
-(void)strokeRect:(struct CGRect )arg0 ;
-(void)strokeRect:(struct CGRect )arg0 blendMode:(int)arg1 ;


@end


#endif