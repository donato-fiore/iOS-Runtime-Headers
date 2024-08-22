// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HIDEVENT_H
#define HIDEVENT_H


#import <Foundation/Foundation.h>


@interface HIDEvent : NSObject {
    ? _event;
}




-(NSUInteger)_cfTypeID;
-(id)description;
-(id)initWithSize:(NSUInteger)arg0 type:(unsigned int)arg1 timestamp:(NSUInteger)arg2 options:(unsigned int)arg3 ;
-(void)dealloc;


@end


#endif