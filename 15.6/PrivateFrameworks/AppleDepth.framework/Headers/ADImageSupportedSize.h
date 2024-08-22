// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADIMAGESUPPORTEDSIZE_H
#define ADIMAGESUPPORTEDSIZE_H


#import <Foundation/Foundation.h>


@interface ADImageSupportedSize : NSObject

@property (readonly, nonatomic) NSUInteger layout; // ivar: _layout
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)createWithSize:(struct CGSize )arg0 andLayout:(NSUInteger)arg1 ;


@end


#endif