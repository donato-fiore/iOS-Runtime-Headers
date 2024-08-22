// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINKFEATHERINGDESCRIPTOR_H
#define PKINKFEATHERINGDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface PKInkFeatheringDescriptor : NSObject

@property (nonatomic) CGFloat endCapDistance; // ivar: _endCapDistance
@property (nonatomic) CGFloat endCapFade; // ivar: _endCapFade
@property (nonatomic) CGFloat endCapShrink; // ivar: _endCapShrink
@property (nonatomic) CGFloat endCapTime; // ivar: _endCapTime
@property (nonatomic) CGFloat startCapDistance; // ivar: _startCapDistance
@property (nonatomic) CGFloat startCapFade; // ivar: _startCapFade
@property (nonatomic) CGFloat startCapShrink; // ivar: _startCapShrink
@property (nonatomic) CGFloat startCapTime; // ivar: _startCapTime


+(id)descriptorWithStartCapTime:(CGFloat)arg0 startCapFade:(CGFloat)arg1 endCapTime:(CGFloat)arg2 endCapFade:(CGFloat)arg3 ;
-(id)initWithStartCapTime:(CGFloat)arg0 startCapDistance:(CGFloat)arg1 startCapFade:(CGFloat)arg2 startCapShrink:(CGFloat)arg3 endCapTime:(CGFloat)arg4 endCapDistance:(CGFloat)arg5 endCapFade:(CGFloat)arg6 endCapShrink:(CGFloat)arg7 ;
-(id)mutableCopy;


@end


#endif