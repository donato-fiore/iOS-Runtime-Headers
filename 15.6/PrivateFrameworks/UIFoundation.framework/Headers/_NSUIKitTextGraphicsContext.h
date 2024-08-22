// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSUIKITTEXTGRAPHICSCONTEXT_H
#define _NSUIKITTEXTGRAPHICSCONTEXT_H

@class NSString;
@protocol NSTextGraphicsContextInternal;

#import <Foundation/Foundation.h>


@interface _NSUIKitTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>



@property (readonly) *CGContext CGContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property (readonly, getter=isFlipped) BOOL flipped;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)graphicsContextForApplicationFrameworkContext:(NSInteger)arg0 ;
+(id)sharedContext;
-(void)becomeCurrentGraphicsContextDuringBlock:(id)arg0 ;
-(void)restoreGraphicsState;
-(void)saveGraphicsState;


@end


#endif