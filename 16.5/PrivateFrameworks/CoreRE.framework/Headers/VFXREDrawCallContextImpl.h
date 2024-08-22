// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VFXREDRAWCALLCONTEXTIMPL_H
#define VFXREDRAWCALLCONTEXTIMPL_H

@class NSString;
@protocol VFXREDrawCallContext, VFXRERenderTargetInfo;

#import <Foundation/Foundation.h>


@interface VFXREDrawCallContextImpl : NSObject <VFXREDrawCallContext>



@property (nonatomic) *void _bufferTable; // ivar: __bufferTable
@property (nonatomic) *void _constantTable; // ivar: __constantTable
@property (nonatomic) *RenderTargetInfo _renderTargetInfo; // ivar: __renderTargetInfo
@property (nonatomic) *void _samplerTable; // ivar: __samplerTable
@property (nonatomic) *void _textureTable; // ivar: __textureTable
@property (nonatomic) *void _viewports; // ivar: __viewports
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<VFXRERenderTargetInfo> *renderTargetInfo;
@property (readonly) Class superclass;


-(BOOL)constantOffsetAndSize:(int)arg0 ;
-(char *)constantData:(int)arg0 ;
-(id)buffer:(int)arg0 ;
-(id)sampler:(int)arg0 ;
-(id)texture:(int)arg0 ;
-(void)setLateLatchingPatchHandler:(id)arg0 ;
-(void)viewports:(**void)arg0 ;


@end


#endif