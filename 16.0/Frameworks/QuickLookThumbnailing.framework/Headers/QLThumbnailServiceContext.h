// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILSERVICECONTEXT_H
#define QLTHUMBNAILSERVICECONTEXT_H

@class NSExtensionContext, NSString;
@protocol QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService;


#import "QLThumbnailProvider.h"

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) QLThumbnailProvider *thumbnailProvider; // ivar: _thumbnailProvider


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_thumbnailGenerationQueue;
-(id)protocolHost;
-(id)protocolHostWithErrorHandler:(id)arg0 ;
-(void)generateThumbnailOfSize:(struct CGSize )arg0 minimumSize:(CGFloat)arg1 scale:(CGFloat)arg2 badgeType:(NSUInteger)arg3 iconFlavor:(int)arg4 contentType:(id)arg5 interpolationQuality:(int)arg6 withContents:(id)arg7 additionalResourcesWrapper:(id)arg8 generatorData:(id)arg9 completionHandler:(id)arg10 ;
-(void)generateThumbnailOfSize:(struct CGSize )arg0 minimumSize:(CGFloat)arg1 scale:(CGFloat)arg2 badgeType:(NSUInteger)arg3 iconFlavor:(int)arg4 contentType:(id)arg5 interpolationQuality:(int)arg6 withFileURLHandler:(id)arg7 additionalResourcesWrapper:(id)arg8 generatorData:(id)arg9 completionHandler:(id)arg10 ;
-(void)ioSurfaceForRequest:(id)arg0 withSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)provideThumbnailForRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif