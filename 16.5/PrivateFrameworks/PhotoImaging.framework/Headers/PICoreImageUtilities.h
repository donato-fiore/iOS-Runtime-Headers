// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOREIMAGEUTILITIES_H
#define PICOREIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PICoreImageUtilities : NSObject



+(id)framedRectImageWithCGRect:(struct CGRect )arg0 color:(id)arg1 borderWidth:(CGFloat)arg2 ;
+(id)loadFilterWithName:(id)arg0 ;
+(id)metalKernelWithFunctionName:(id)arg0 error:(*id)arg1 ;
+(id)metalLibraryData;


@end


#endif