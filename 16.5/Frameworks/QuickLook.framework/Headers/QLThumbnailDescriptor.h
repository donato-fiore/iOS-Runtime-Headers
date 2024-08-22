// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILDESCRIPTOR_H
#define QLTHUMBNAILDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface QLThumbnailDescriptor : NSObject

@property CGFloat scaleFactor; // ivar: _scaleFactor
@property CGSize size; // ivar: _size


+(id)descriptorWithSize:(struct CGSize )arg0 scaleFactor:(CGFloat)arg1 ;


@end


#endif