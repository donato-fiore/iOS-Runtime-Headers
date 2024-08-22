// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIPRLIKENESSPLACEHOLDERPROVIDER_H
#define CNUIPRLIKENESSPLACEHOLDERPROVIDER_H

@class CNCache, NSString;
@protocol CNUIPRLikenessProvider;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider>



@property (readonly, nonatomic) CNCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)companyImageNameForDiameter:(CGFloat)arg0 ;
+(id)imageNameForDiameter:(CGFloat)arg0 ;
-(NSUInteger)_cnui_likenessType;
-(id)_cnui_likenessForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(struct CGImage *)_cnui_circularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderCircularImageForSilhouetteImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(struct CGImage *)renderRoundedRectImageForSilhouetteImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;


@end


#endif