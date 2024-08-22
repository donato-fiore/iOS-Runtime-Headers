// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONLAYOUT_H
#define PISEGMENTATIONLAYOUT_H


#import <Foundation/Foundation.h>


@interface PISegmentationLayout : NSObject



+(id)generateLayoutForLayoutConfiguration:(id)arg0 imageSize:(struct CGSize )arg1 regions:(id)arg2 parallaxClassification:(NSUInteger)arg3 context:(id)arg4 matte:(id)arg5 layoutScore:(*CGFloat)arg6 cropScore:(*CGFloat)arg7 clockOverlapAcceptable:(*BOOL)arg8 ;


@end


#endif