// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCAPTURECALLBACKRECEIPT_H
#define CAMCAPTURECALLBACKRECEIPT_H


#import <Foundation/Foundation.h>


@interface CAMCaptureCallbackReceipt : NSObject

@property (readonly, nonatomic) NSInteger callback; // ivar: _callback
@property (readonly, nonatomic) CGFloat secondsSinceBegin; // ivar: _secondsSinceBegin


-(id)initWithCallback:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif