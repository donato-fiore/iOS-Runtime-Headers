// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKFEATHERINGDESCRIPTOR_H
#define PKINKFEATHERINGDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface PKInkFeatheringDescriptor : NSObject

@property (nonatomic) CGFloat endCapFade; // ivar: _endCapFade
@property (nonatomic) CGFloat endCapTime; // ivar: _endCapTime
@property (nonatomic) CGFloat startCapFade; // ivar: _startCapFade
@property (nonatomic) CGFloat startCapTime; // ivar: _startCapTime


+(id)descriptorWithStartCapTime:(CGFloat)arg0 startCapFade:(CGFloat)arg1 endCapTime:(CGFloat)arg2 endCapFade:(CGFloat)arg3 ;


@end


#endif