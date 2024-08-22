// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSCGTEXTGRAPHICSCONTEXT_H
#define _NSCGTEXTGRAPHICSCONTEXT_H

@class NSString;
@protocol NSTextGraphicsContextInternal;

#import <Foundation/Foundation.h>


@interface _NSCGTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>

 {
    *CGContext _context;
}


@property (readonly) *CGContext CGContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property (readonly, getter=isFlipped) BOOL flipped;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)graphicsContextForApplicationFrameworkContext:(NSInteger)arg0 ;
-(id)initWithCGContext:(struct CGContext *)arg0 ;
-(void)becomeCurrentGraphicsContextDuringBlock:(id)arg0 ;
-(void)dealloc;
-(void)restoreGraphicsState;
-(void)saveGraphicsState;


@end


#endif