// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VFXRERENDERTARGETINFOIMPL_H
#define VFXRERENDERTARGETINFOIMPL_H

@class NSString;
@protocol VFXRERenderTargetInfo;

#import <Foundation/Foundation.h>


@interface VFXRERenderTargetInfoImpl : NSObject <VFXRERenderTargetInfo>



@property (nonatomic) *RenderTargetInfo _renderTargetInfo; // ivar: __renderTargetInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger sampleCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL vrrEnabled;


-(NSUInteger)colorPixelFormatAtIndex:(NSInteger)arg0 ;


@end


#endif