// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHIDTRANSFORMER_H
#define _UIHIDTRANSFORMER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_UIHIDContext.h"

@interface _UIHIDTransformer : NSObject {
    _UIHIDContext *_hidContext;
    NSMutableArray *_hidEvents;
    NSMutableDictionary *_hidContextByContextId;
    *__IOHIDEvent _hidEvent;
    CGAffineTransform _eventTransform;
}


@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (nonatomic) unsigned int contextId; // ivar: _contextId


-(id)_inputEventsForHIDEvent:(struct __IOHIDEvent *)arg0 contextId:(unsigned int)arg1 ;
-(id)drainOutputHIDEvents;
-(id)handleHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)initWithRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)addOutputHIDEvent:(id)arg0 ;


@end


#endif