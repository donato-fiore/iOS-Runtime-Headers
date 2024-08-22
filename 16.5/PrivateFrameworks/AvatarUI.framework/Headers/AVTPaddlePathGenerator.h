// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTPADDLEPATHGENERATOR_H
#define AVTPADDLEPATHGENERATOR_H


#import <Foundation/Foundation.h>


@interface AVTPaddlePathGenerator : NSObject



+(id)concentricCornerPathWithBaseRect:(struct CGRect )arg0 radius:(CGFloat)arg1 topToBottom:(BOOL)arg2 rightToLeft:(BOOL)arg3 ;
+(id)paddlePathWithBaseRect:(struct CGRect )arg0 contentRect:(struct CGRect )arg1 radius:(CGFloat)arg2 topToBottom:(BOOL)arg3 rightToLeft:(BOOL)arg4 ;


@end


#endif