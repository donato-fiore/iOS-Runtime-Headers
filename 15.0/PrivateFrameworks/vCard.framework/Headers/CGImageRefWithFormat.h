// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CGIMAGEREFWITHFORMAT_H
#define CGIMAGEREFWITHFORMAT_H


#import <Foundation/Foundation.h>


@interface CGImageRefWithFormat : NSObject

@property (readonly, nonatomic) *CGImage imageRef; // ivar: _imageRef
@property (readonly, nonatomic) *__CFString sourceImageFormatUTI; // ivar: _sourceImageFormatUTI


-(id)initWithImage:(struct CGImage *)arg0 andFormat:(struct __CFString *)arg1 ;


@end


#endif