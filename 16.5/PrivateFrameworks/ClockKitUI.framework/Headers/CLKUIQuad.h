// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIQUAD_H
#define CLKUIQUAD_H


#import <Foundation/Foundation.h>

#import "CLKUIQuadView.h"

@interface CLKUIQuad : NSObject

@property (nonatomic, getter=isOpaque) BOOL opaque; // ivar: _opaque
@property (weak, nonatomic) CLKUIQuadView *quadView; // ivar: _quadView


-(BOOL)prepareForTime:(CGFloat)arg0 ;
-(id)init;
-(void)encodeGLforSize:(struct CLKUIQuadSize )arg0 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg0 ;
-(void)purge;
-(void)renderFailedForReason:(NSUInteger)arg0 ;
-(void)renderForDisplayWithEncoder:(id)arg0 ;
-(void)renderWithCommandBuffer:(id)arg0 passDescriptor:(id)arg1 ;
-(void)setupForQuadView:(id)arg0 ;
-(void)unlinkQuadView;


@end


#endif