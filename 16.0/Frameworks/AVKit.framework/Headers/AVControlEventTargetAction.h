// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTROLEVENTTARGETACTION_H
#define AVCONTROLEVENTTARGETACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVControlEventTargetAction : NSObject {
    id *_target;
    SEL _action;
    NSString *_event;
    NSUInteger _parameterCount;
}




-(BOOL)hasMatchingEvent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 event:(id)arg2 ;
-(void)sendAction:(id)arg0 ;


@end


#endif