// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPPTTEXTRENDERINGTESTER_H
#define PXGPPTTEXTRENDERINGTESTER_H

@protocol PXGTextureProviderDelegate;

#import <Foundation/Foundation.h>

#import "PXGStringTextureProvider.h"
#import "PXGPPTStringsLayout.h"

@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate>



@property (retain, nonatomic) PXGStringTextureProvider *stringTextureProvider; // ivar: _stringTextureProvider
@property (retain, nonatomic) PXGPPTStringsLayout *stringsLayout; // ivar: _stringsLayout
@property (copy, nonatomic) id *textureProviderDidProvideCGImageHandler; // ivar: _textureProviderDidProvideCGImageHandler


// -(void)runRenderTextTestWithOptions:(id)arg0 latencyMeter:(id)arg1 completionHandler:(id)arg2 failureHandler:(unk)arg3  ;
-(void)textureProvider:(id)arg0 didProvideCGImage:(struct CGImage *)arg1 options:(struct ? )arg2 isDegraded:(BOOL)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg0 didProvideFailureWithError:(id)arg1 forRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg0 didProvideImageData:(id)arg1 withSpecAtIndex:(NSInteger)arg2 size:(struct CGSize )arg3 bytesPerRow:(NSUInteger)arg4 contentsRect:(struct CGRect )arg5 forRequestID:(int)arg6 ;
-(void)textureProvider:(id)arg0 didProvideNothingForRequestID:(int)arg1 ;
-(void)textureProvider:(id)arg0 didProvidePayload:(id)arg1 forRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg0 didProvidePixelBuffer:(struct __CVBuffer *)arg1 options:(struct ? )arg2 forRequestID:(int)arg3 ;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg0 ;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg0 ;


@end


#endif