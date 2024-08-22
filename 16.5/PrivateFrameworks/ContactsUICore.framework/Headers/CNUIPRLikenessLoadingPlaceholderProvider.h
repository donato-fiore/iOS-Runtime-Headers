// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIPRLIKENESSLOADINGPLACEHOLDERPROVIDER_H
#define CNUIPRLIKENESSLOADINGPLACEHOLDERPROVIDER_H

@class CNCache, NSString;
@protocol CNUIPRLikenessProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider>



@property (readonly, nonatomic) CNCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly) Class superclass;


-(NSUInteger)_cnui_likenessType;
-(id)_cnui_likenessForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(struct CGImage *)_cnui_circularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderCircularImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(struct CGImage *)renderRoundedRectImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif