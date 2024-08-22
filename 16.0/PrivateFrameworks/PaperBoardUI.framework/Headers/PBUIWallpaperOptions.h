// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPEROPTIONS_H
#define PBUIWALLPAPEROPTIONS_H

@class NSString, NSData, NSDictionary;
@protocol NSCopying, BSDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBUIWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>



@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMagnifyEnabled) BOOL magnifyEnabled; // ivar: _magnifyEnabled
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL parallaxEnabled;
@property (nonatomic) CGFloat parallaxFactor; // ivar: _parallaxFactor
@property (readonly, copy, nonatomic) NSData *persistentDataRepresentation;
@property (nonatomic, getter=isPortrait) BOOL portrait; // ivar: _portrait
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) CGFloat stillTimeInVideo; // ivar: _stillTimeInVideo
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCropping; // ivar: _supportsCropping
@property (nonatomic) BOOL supportsRotation; // ivar: _supportsRotation
@property (copy, nonatomic) NSDictionary *wallpaperKitData; // ivar: _wallpaperKitData
@property (nonatomic) NSInteger wallpaperMode; // ivar: _wallpaperMode
@property (nonatomic) NSInteger wallpaperStatus; // ivar: _wallpaperStatus
@property (nonatomic) CGFloat zoomScale; // ivar: _zoomScale


+(BOOL)supportsSecureCoding;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 portrait:(BOOL)arg5 ;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 portrait:(BOOL)arg5 hasVideo:(BOOL)arg6 stillTimeInVideo:(CGFloat)arg7 ;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 portrait:(BOOL)arg5 hasVideo:(BOOL)arg6 stillTimeInVideo:(CGFloat)arg7 wallpaperKitData:(id)arg8 ;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 portrait:(BOOL)arg5 hasVideo:(BOOL)arg6 stillTimeInVideo:(CGFloat)arg7 wallpaperMode:(NSInteger)arg8 wallpaperStatus:(NSInteger)arg9 ;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 portrait:(BOOL)arg5 hasVideo:(BOOL)arg6 stillTimeInVideo:(CGFloat)arg7 wallpaperMode:(NSInteger)arg8 wallpaperStatus:(NSInteger)arg9 wallpaperKitData:(id)arg10 ;
+(id)optionsWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 supportsRotation:(BOOL)arg5 rotationAngle:(CGFloat)arg6 portrait:(BOOL)arg7 hasVideo:(BOOL)arg8 stillTimeInVideo:(CGFloat)arg9 wallpaperMode:(NSInteger)arg10 wallpaperStatus:(NSInteger)arg11 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLooselyEqualToWallpaperOptions:(id)arg0 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithName:(id)arg0 parallaxFactor:(CGFloat)arg1 zoomScale:(CGFloat)arg2 supportsCropping:(BOOL)arg3 cropRect:(struct CGRect )arg4 supportsRotation:(BOOL)arg5 rotationAngle:(CGFloat)arg6 portrait:(BOOL)arg7 hasVideo:(BOOL)arg8 stillTimeInVideo:(CGFloat)arg9 wallpaperMode:(NSInteger)arg10 wallpaperStatus:(NSInteger)arg11 wallpaperKitData:(id)arg12 ;
-(id)initWithPersistentDataRepresentation:(id)arg0 ;
-(id)initWithStream:(id)arg0 ;
-(id)persistentPropertyList;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )bestWallpaperSizeForWallpaperSize:(struct CGSize )arg0 wallpaperScale:(CGFloat)arg1 deviceType:(NSInteger)arg2 imageScale:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif