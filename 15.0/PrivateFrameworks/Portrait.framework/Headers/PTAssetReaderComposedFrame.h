// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTASSETREADERCOMPOSEDFRAME_H
#define PTASSETREADERCOMPOSEDFRAME_H


#import <Foundation/Foundation.h>


@interface PTAssetReaderComposedFrame : NSObject

@property (readonly, nonatomic) *__CVBuffer auxBuffer; // ivar: _auxBuffer
@property (readonly, nonatomic) *__CVBuffer colorBuffer; // ivar: _colorBuffer
@property (readonly, nonatomic) ? time; // ivar: _time


-(id)initWithTime:(struct ? )arg0 colorBuffer:(struct __CVBuffer *)arg1 auxBuffer:(struct __CVBuffer *)arg2 ;
-(void)dealloc;


@end


#endif