// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUICODABLEIMAGE_H
#define PBUICODABLEIMAGE_H

@class IOSurface, NSURL, NSData, NSString;
@protocol NSSecureCoding, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface PBUICodableImage : NSObject <NSSecureCoding, BSXPCSecureCoding>

 {
    NSInteger _representation;
    IOSurface *_surface;
    NSURL *_url;
    *CGImage _sourceImage;
    NSData *_bitmapSourceData;
    *CGImage _cachedImage;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


+(BOOL)bs_encodeRepresentation:(NSInteger)arg0 value:(id)arg1 withCoder:(id)arg2 ;
+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)dataRepresentationForImage:(struct CGImage *)arg0 error:(*id)arg1 ;
+(struct CGImage *)createCGImageFromCPBitmapData:(id)arg0 error:(*id)arg1 ;
+(struct CGImage *)createCGImageFromData:(id)arg0 error:(*id)arg1 ;
+(struct CGImage *)createCGImageFromURL:(id)arg0 error:(*id)arg1 ;
+(void)encodeRepresentation:(NSInteger)arg0 value:(id)arg1 withCoder:(id)arg2 ;
-(BOOL)isEqualRepresentation:(id)arg0 ;
-(BOOL)refersToIdenticalImageFrom:(id)arg0 ;
-(id)initFromSourceData:(id)arg0 scale:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initFromURL:(id)arg0 scale:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 scale:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initWithUIImage:(id)arg0 error:(*id)arg1 ;
-(id)wrappedIOSurface;
-(struct CGImage *)buildCGImageWithError:(*id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setImage:(struct CGImage *)arg0 ;


@end


#endif