// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCGAMEPADEVENTHID_H
#define _GCGAMEPADEVENTHID_H

@class NSString;
@protocol _GCGamepadEvent;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventHID : NSObject <_GCGamepadEvent>

 {
    *__IOHIDEvent _extendedEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *__IOHIDEvent event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSUInteger timestamp;


-(BOOL)hasValidValueForElement:(NSInteger)arg0 ;
-(float)floatValueForElement:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)dealloc;


@end


#endif