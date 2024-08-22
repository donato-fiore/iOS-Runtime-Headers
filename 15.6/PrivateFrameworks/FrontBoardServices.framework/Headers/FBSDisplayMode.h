// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSDISPLAYMODE_H
#define FBSDISPLAYMODE_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

 {
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _preferredScale;
    CGFloat _scaleOverride;
    NSInteger _rotation;
    BOOL _virtual;
}


@property (readonly, nonatomic) NSInteger colorGamut; // ivar: _gamut
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hdrMode; // ivar: _hdr
@property (readonly, nonatomic) CGSize nativePixelSize;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) CGFloat refreshRate; // ivar: _refreshRate
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_emptyMode;
-(BOOL)_isVirtualMode;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_caRefreshRate;
-(NSInteger)_rotation;
-(NSUInteger)_caHeight;
-(NSUInteger)_caPreferredScale;
-(NSUInteger)_caWidth;
-(id)_caColorGamut;
-(id)_caHDRMode;
-(id)_copyWithOverrideRefreshRate:(CGFloat)arg0 ;
-(id)_copyWithOverrideSize:(struct CGSize )arg0 ;
-(id)_copyWithOverrideSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)_initWithCADisplayMode:(id)arg0 scale:(CGFloat)arg1 rotation:(NSInteger)arg2 ;
-(id)_initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 preferredScale:(NSUInteger)arg2 scaleOverride:(CGFloat)arg3 refreshRate:(CGFloat)arg4 gamut:(NSInteger)arg5 hdr:(NSInteger)arg6 rotation:(NSInteger)arg7 virtual:(BOOL)arg8 validityCheck:(NSInteger)arg9 ;
-(id)_initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 scale:(NSUInteger)arg2 refreshRate:(CGFloat)arg3 gamut:(NSInteger)arg4 hdr:(NSInteger)arg5 ;
-(id)_referenceSizeDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif