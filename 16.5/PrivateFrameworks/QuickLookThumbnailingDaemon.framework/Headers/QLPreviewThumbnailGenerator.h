// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWTHUMBNAILGENERATOR_H
#define QLPREVIEWTHUMBNAILGENERATOR_H

@class NSString, NSDictionary, QLThumbnailMetadata, QLThumbnailItem, NSData, QLPlatformImage;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLPreviewThumbnailGenerator : NSObject {
    CGSize _size;
    NSUInteger _badgeType;
}


@property BOOL addDecorations; // ivar: _addDecorations
@property CGRect contentRect; // ivar: _contentRect
@property (copy) NSString *extensionBadge; // ivar: _extensionBadge
@property (retain) NSDictionary *externalThumbnailGeneratorData; // ivar: _externalThumbnailGeneratorData
@property int flavor; // ivar: _flavor
@property (retain) QLThumbnailMetadata *generatedProperties; // ivar: generatedProperties
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue; // ivar: _generationQueue
@property int interpolationQuality; // ivar: _interpolationQuality
@property (retain) QLThumbnailItem *item; // ivar: _item
@property (readonly) NSData *jpegRepresentation; // ivar: _jpegRepresentation
@property CGFloat minSize; // ivar: _minSize
@property BOOL resultHasIconModeApplied; // ivar: _resultHasIconModeApplied
@property BOOL resultIsLowQuality; // ivar: _resultIsLowQuality
@property NSUInteger sandboxExtension; // ivar: _sandboxExtension
@property CGFloat scale; // ivar: _scale
@property (readonly) BOOL shouldUseRestrictedExtension; // ivar: _shouldUseRestrictedExtension
@property int status; // ivar: _status
@property (retain) QLPlatformImage *thumbnailImage; // ivar: _thumbnailImage
@property BOOL wantsBaseline; // ivar: _wantsBaseline
@property BOOL wantsJPEGRepresentationInstead; // ivar: _wantsJPEGRepresentationInstead
@property BOOL wantsLowQuality; // ivar: _wantsLowQuality


+(BOOL)canGenerateThumbnailForURL:(id)arg0 ;
+(CGFloat)cornerRadiusForSize:(struct CGSize )arg0 ;
+(id)generateIconDataFromThumbnailData:(id)arg0 inputFormat:(id)arg1 outputFormat:(*id)arg2 outputContentRect:(struct CGRect *)arg3 desiredSize:(struct CGSize )arg4 desiredScale:(CGFloat)arg5 desiredFlavor:(int)arg6 extensionBadge:(id)arg7 wantsLowQuality:(BOOL)arg8 iconVariant:(NSInteger)arg9 ;
+(id)generatorForThumbnailItem:(id)arg0 size:(struct CGSize )arg1 minSize:(CGFloat)arg2 scale:(CGFloat)arg3 ;
+(id)generatorForThumbnailItem:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
+(id)generatorForURL:(id)arg0 maxSize:(struct CGSize )arg1 minSize:(CGFloat)arg2 scale:(CGFloat)arg3 lowQuality:(BOOL)arg4 decorations:(BOOL)arg5 wantsBaseline:(BOOL)arg6 ;
+(id)generatorForURL:(id)arg0 maxSize:(struct CGSize )arg1 scale:(CGFloat)arg2 lowQuality:(BOOL)arg3 decorations:(BOOL)arg4 wantsBaseline:(BOOL)arg5 ;
-(CGFloat)_minimumDimensionForPDFPage:(struct CGPDFPage *)arg0 requestThumbnailSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)initWithThumbnailItem:(id)arg0 size:(struct CGSize )arg1 minSize:(CGFloat)arg2 scale:(CGFloat)arg3 decorations:(BOOL)arg4 ;
-(id)initWithThumbnailItem:(id)arg0 size:(struct CGSize )arg1 minSize:(CGFloat)arg2 scale:(CGFloat)arg3 lowQuality:(BOOL)arg4 wantsBaseline:(BOOL)arg5 decorations:(BOOL)arg6 badgeType:(NSUInteger)arg7 interpolationQuality:(int)arg8 externalThumbnailGeneratorData:(id)arg9 shouldUseRestrictedExtension:(BOOL)arg10 ;
-(id)initWithThumbnailItem:(id)arg0 size:(struct CGSize )arg1 minSize:(CGFloat)arg2 scale:(CGFloat)arg3 lowQuality:(BOOL)arg4 wantsBaseline:(BOOL)arg5 decorations:(BOOL)arg6 badgeType:(NSUInteger)arg7 interpolationQuality:(int)arg8 shouldUseRestrictedExtension:(BOOL)arg9 ;
-(struct CGContext *)_beginContext;
-(struct CGContext *)_beginContextWithSize:(struct CGSize )arg0 ;
-(struct CGContext *)_beginContextWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_createThumbnailForIWorkFile;
-(struct CGImage *)_createThumbnailForImage;
-(struct CGImage *)_createThumbnailForImageSource:(struct CGImageSource *)arg0 ;
-(struct CGImage *)_createThumbnailForLivePhoto;
-(struct CGImage *)_createThumbnailForMovie;
-(struct CGImage *)_createThumbnailForPDF;
-(struct CGImage *)_createThumbnailForText;
-(struct CGImage *)_drawRTFThumbnailFromAttributedString:(id)arg0 inRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(struct CGImage *)_drawTextThumbnailFromAttributedString:(id)arg0 inRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(struct CGSize )_pixelSize;
-(void)_generateThumbnailFromThirdPartyExtensionAndReplyWith:(id)arg0 ;
// -(void)_generateThumbnailWithWillStartBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_replyWithImage:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)generateWithCompletionBlock:(id)arg0 ;
// -(void)generateWithWillStartBlock:(id)arg0 completionBlock:(unk)arg1  ;


@end


#endif