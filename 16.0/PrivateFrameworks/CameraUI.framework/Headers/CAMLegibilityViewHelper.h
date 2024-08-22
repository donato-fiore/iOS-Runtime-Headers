// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLEGIBILITYVIEWHELPER_H
#define CAMLEGIBILITYVIEWHELPER_H


#import <Foundation/Foundation.h>


@interface CAMLegibilityViewHelper : NSObject



+(id)_imageFromLabel:(id)arg0 sizeToFit:(BOOL)arg1 ;
+(id)imageForText:(id)arg0 font:(id)arg1 textAlignment:(NSInteger)arg2 constrainedToSize:(struct CGSize )arg3 ;
+(id)newLegibilityViewWithSettings:(id)arg0 forLabel:(id)arg1 sizeToFit:(BOOL)arg2 ;


@end


#endif