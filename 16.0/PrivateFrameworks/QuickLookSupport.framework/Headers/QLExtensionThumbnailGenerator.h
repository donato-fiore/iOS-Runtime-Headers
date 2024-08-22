// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLEXTENSIONTHUMBNAILGENERATOR_H
#define QLEXTENSIONTHUMBNAILGENERATOR_H

@class NSString;
@protocol QLThumbnailSurfaceGeneratorProtocol;

#import <Foundation/Foundation.h>

#import "QLExtensionManager.h"

@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) QLExtensionManager *extensionManager; // ivar: _extensionManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasThirdPartyThumbnailGeneratorForContentType:(id)arg0 ;
+(BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)arg0 ;
+(BOOL)hasThumbnailGeneratorForContentType:(id)arg0 firstPartyExtension:(BOOL)arg1 ;
-(id)_generateImageFromRawData:(id)arg0 bitmapFormat:(id)arg1 scale:(CGFloat)arg2 ;
-(id)_generateImageFromURL:(id)arg0 withSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)init;
-(void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 generatorData:(id)arg5 interpolationQuality:(int)arg6 shouldUseRestrictedExtension:(BOOL)arg7 completionBlock:(id)arg8 ;
-(void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 generatorData:(id)arg5 shouldUseRestrictedExtension:(BOOL)arg6 completionBlock:(id)arg7 ;
-(void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 iconFlavor:(int)arg5 generatorData:(id)arg6 interpolationQuality:(int)arg7 shouldUseRestrictedExtension:(BOOL)arg8 completionBlock:(id)arg9 ;
-(void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)arg0 ofSize:(struct CGSize )arg1 minimumSize:(CGFloat)arg2 scale:(CGFloat)arg3 badgeType:(NSUInteger)arg4 iconFlavor:(int)arg5 generatorData:(id)arg6 shouldUseRestrictedExtension:(BOOL)arg7 completionBlock:(id)arg8 ;
-(void)ioSurfaceWithSize:(struct CGSize )arg0 completion:(id)arg1 ;


@end


#endif