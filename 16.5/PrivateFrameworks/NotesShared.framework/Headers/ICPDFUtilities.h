// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPDFUTILITIES_H
#define ICPDFUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICPDFUtilities : NSObject



+(id)renderedImageForPage:(struct CGPDFPage *)arg0 scale:(CGFloat)arg1 size:(struct CGSize )arg2 colorSpace:(struct CGColorSpace *)arg3 ;


@end


#endif