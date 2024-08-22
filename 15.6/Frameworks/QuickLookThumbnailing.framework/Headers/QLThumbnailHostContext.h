// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILHOSTCONTEXT_H
#define QLTHUMBNAILHOSTCONTEXT_H

@class NSExtensionContext, NSString, NSOperationQueue;
@protocol QLThumbnailHost, QLThumbnailSurfaceGeneratorProtocol;



@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<QLThumbnailSurfaceGeneratorProtocol> *ioSurfaceGenerator; // ivar: _ioSurfaceGenerator
@property (readonly) Class superclass;
@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue; // ivar: _thumbnailGenerationConcurrenQueue


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)protocolServiceWithErrorHandler:(id)arg0 ;
-(void)generateThumbnailOfSize:(struct CGSize )arg0 minimumSize:(CGFloat)arg1 scale:(CGFloat)arg2 badgeType:(NSUInteger)arg3 iconFlavor:(int)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 generatorData:(id)arg7 interpolationQuality:(int)arg8 completionHandler:(id)arg9 ;
-(void)ioSurfaceWithSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif