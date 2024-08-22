// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITARTWORKMANAGER_H
#define MKTRANSITARTWORKMANAGER_H

@class VKIconManager;

#import <Foundation/Foundation.h>


@interface MKTransitArtworkManager : NSObject

@property (readonly, nonatomic) VKIconManager *iconManager; // ivar: _iconManager


+(id)sharedInstance;
-(BOOL)_isMemoryConstrained;
-(id)_createImageWithBlockInAutoreleasePoolIfNeeded:(id)arg0 ;
-(id)_imageFroMVKImage:(id)arg0 ;
-(id)_imageWithDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 withWidthPaddingMultiple:(CGFloat)arg5 fullBleedColor:(*id)arg6 ;
-(id)_vkImageWithShieldDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 widthPaddingMultiple:(CGFloat)arg5 ;
-(id)initWithIconManager:(id)arg0 ;
-(id)transitArtworkImageWithDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 ;
-(id)transitArtworkImageWithDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 withWidthPaddingMultiple:(CGFloat)arg5 ;
-(id)transitArtworkImageWithDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 withWidthPaddingMultiple:(CGFloat)arg5 fullBleedColor:(*id)arg6 ;
-(id)transitArtworkImageWithShieldDataSource:(id)arg0 size:(NSInteger)arg1 featureType:(NSUInteger)arg2 scale:(CGFloat)arg3 nightMode:(BOOL)arg4 ;
-(void)purge;


@end


#endif