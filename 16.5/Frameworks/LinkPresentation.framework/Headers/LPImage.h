// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPIMAGE_H
#define LPIMAGE_H

@class UIImage, NSData, NSString, NSItemProvider, NSArray, NSURL;
@protocol LPAsynchronousResource, NSSecureCoding, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "LPImageProperties.h"
#import "LPImage.h"

@interface LPImage : NSObject <LPAsynchronousResource, NSSecureCoding>

 {
    UIImage *_originalPlatformImage;
    UIImage *_decodedPlatformImage;
    NSData *_data;
    NSString *_MIMEType;
    LPImageProperties *_properties;
    NSItemProvider *_itemProvider;
    LPImage *_imageLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    CGSize _pixelSize;
    BOOL _isAnimated;
    BOOL _hasComputedPixelSize;
    BOOL _hasTransparency;
    BOOL _hasComputedHasTransparency;
    BOOL _hasComputedIsAnimated;
}


@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) id *_alternateHTMLImageGenerator; // ivar: __alternateHTMLImageGenerator
@property (readonly, nonatomic, getter=_isAnimated) BOOL _animated;
@property (retain, nonatomic, setter=_setDarkInterfaceAlternativeImage:) LPImage *_darkInterfaceAlternativeImage; // ivar: _darkInterfaceAlternativeImage
@property (readonly, nonatomic) NSUInteger _encodedSize;
@property (nonatomic, getter=_isFallbackIcon) BOOL _fallbackIcon; // ivar: _fallbackIcon
@property (readonly, nonatomic) BOOL _hasTransparency;
@property (readonly, nonatomic) BOOL _isImperceptible;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (readonly, nonatomic) CGSize _pixelSize;
@property (nonatomic, getter=_isPrecomposedAppIcon) BOOL _precomposedAppIcon; // ivar: _precomposedAppIcon
@property (retain, nonatomic) NSArray *_remoteURLsForEmailCompatibleOutput; // ivar: _remoteURLsForEmailCompatibleOutput
@property (readonly, copy, nonatomic) NSString *_srcsetForRemoteURLs;
@property (nonatomic) BOOL _useLossyCompressionForEncodedData; // ivar: _useLossyCompressionForEncodedData
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *platformImage; // ivar: _platformImage
@property (readonly, copy, nonatomic) LPImageProperties *properties;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_PDFImageNamed:(id)arg0 template:(BOOL)arg1 ;
+(id)_PNGImageNamed:(id)arg0 ;
+(id)_PNGImageNamed:(id)arg0 template:(BOOL)arg1 properties:(id)arg2 ;
+(id)_loadImageSubsampledToScreenSizeFromData:(id)arg0 ;
-(BOOL)_isSubstitute;
-(BOOL)hasPlaceholderValueForAsynchronousLoad;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsAsynchronousLoad;
-(id)_asTemplate;
-(id)_initWithCGImage:(struct CGImage *)arg0 ;
-(id)_initWithCGImage:(struct CGImage *)arg0 properties:(id)arg1 ;
-(id)_initWithImage:(id)arg0 ;
-(id)_initWithImage:(id)arg0 properties:(id)arg1 ;
// -(id)_initWithPlatformImageGenerator:(id)arg0 properties:(unk)arg1  ;
-(id)init;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 ;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 MIMEType:(id)arg1 ;
-(id)initWithData:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithItemProvider:(id)arg0 properties:(id)arg1 placeholderImage:(id)arg2 ;
-(id)initWithPlatformImage:(id)arg0 ;
-(id)initWithPlatformImage:(id)arg0 properties:(id)arg1 ;
-(void)_createDataFromPlatformImage;
-(void)_mapDataFromFileURL;
-(void)_preparePlatformImageWithCompletionHandler:(id)arg0 ;
-(void)_synchronouslyDecodePlatformImageWithMaximumSize:(struct CGSize )arg0 ;
-(void)_waitForAsynchronouslyLoadedImageIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAsynchronouslyWithCompletionHandler:(id)arg0 ;


@end


#endif