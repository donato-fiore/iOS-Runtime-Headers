// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIPRLIKENESSPHOTOPROVIDER_H
#define CNUIPRLIKENESSPHOTOPROVIDER_H

@class CNCache, NSString, NSData;
@protocol CNUIPRLikenessProvider;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider>



@property (readonly, nonatomic) CNCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *likenessFingerprint; // ivar: _likenessFingerprint
@property (readonly, nonatomic) NSData *originalPhotoData; // ivar: _originalPhotoData
@property (readonly) Class superclass;


+(struct CGImage *)cgImageFromData:(id)arg0 ;
+(struct CGImage *)cgImageFromData:(id)arg0 maxSize:(struct CGSize )arg1 ;
-(NSUInteger)_cnui_likenessType;
-(id)_cnui_likenessForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithPhotoData:(id)arg0 fingerprint:(id)arg1 ;
-(struct CGImage *)_cnui_circularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_cnui_image;
-(struct CGImage *)_cnui_imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderCircularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderRoundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif