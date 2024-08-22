// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKUTILITIES_H
#define TLKUTILITIES_H


#import <Foundation/Foundation.h>


@interface TLKUtilities : NSObject



+(BOOL)deviceSupportsRotation;
+(BOOL)isHiddenView:(id)arg0 ;
+(BOOL)isMacOS;
+(BOOL)recursivelyCheckIfSubviewTapped:(id)arg0 forTappedView:(id)arg1 ;
+(CGFloat)appIconCornerRadiusRatio;
+(CGFloat)onePixelForCurrentScreenResolution;
+(CGFloat)standardTableCellContentInset;
+(id)testImageWithSize:(struct CGSize )arg0 ;
+(id)testImageWithSize:(struct CGSize )arg0 color:(id)arg1 ;
+(id)testImageWithSize:(struct CGSize )arg0 text:(id)arg1 ;
+(id)testImageWithSize:(struct CGSize )arg0 text:(id)arg1 color:(id)arg2 ;
+(void)dispatchAsyncIfNecessary:(id)arg0 ;
+(void)dispatchMainIfNecessary:(id)arg0 ;
// +(void)executeBlock:(id)arg0 async:(unk)arg1  ;
+(void)performAnimatableChanges:(id)arg0 ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1  ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1 completion:(BOOL)arg2  ;
+(void)performWithoutAnimations:(id)arg0 ;


@end


#endif