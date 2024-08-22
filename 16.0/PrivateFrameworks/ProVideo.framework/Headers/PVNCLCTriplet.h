// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVNCLCTRIPLET_H
#define PVNCLCTRIPLET_H


#import <Foundation/Foundation.h>


@interface PVNCLCTriplet : NSObject

@property (readonly, nonatomic) *__CFString colorPrimary; // ivar: _colorPrimary
@property (readonly, nonatomic) int hgColorPrimary; // ivar: _hgColorPrimary
@property (readonly, nonatomic) int hgTransferFunction; // ivar: _hgTransferFunction
@property (readonly, nonatomic) int hgYCbCrMatrix; // ivar: _hgYCbCrMatrix
@property (readonly, nonatomic) *__CFString transferFunction; // ivar: _transferFunction
@property (readonly, nonatomic) *__CFString ycbcrMatrix; // ivar: _ycbcrMatrix


-(BOOL)isInvalid;
-(id)initWithColorPrimaryStr:(struct __CFString *)arg0 hgColorPrimary:(int)arg1 transferFunctionStr:(struct __CFString *)arg2 hgTransformFunction:(int)arg3 ycbcrMatrixStr:(struct __CFString *)arg4 hgYCbCrMatrix:(int)arg5 ;


@end


#endif