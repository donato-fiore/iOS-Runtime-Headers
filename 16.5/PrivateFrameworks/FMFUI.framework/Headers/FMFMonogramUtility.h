// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMFMONOGRAMUTILITY_H
#define FMFMONOGRAMUTILITY_H


#import <Foundation/Foundation.h>


@interface FMFMonogramUtility : NSObject



+(id)contactImageCache;
+(id)contactStatusCache;
+(id)monogramImageOfDiameter:(CGFloat)arg0 forContact:(id)arg1 monogramStyle:(NSInteger)arg2 tintColor:(id)arg3 customFont:(id)arg4 isPersonImage:(*BOOL)arg5 ;
+(id)monogramImageOfDiameter:(CGFloat)arg0 forContact:(id)arg1 useTintColor:(id)arg2 useCustomFont:(BOOL)arg3 isPersonImage:(*BOOL)arg4 ;
+(id)monogrammerWithDiameter:(CGFloat)arg0 style:(NSInteger)arg1 useTintColor:(id)arg2 customFont:(id)arg3 ;
+(id)placeholderContactImageOfDiameter:(CGFloat)arg0 monogramStyle:(NSInteger)arg1 useTintColor:(id)arg2 ;
+(struct __CFString *)hexStringFromColor:(id)arg0 ;
+(void)clearMonogramCache;


@end


#endif