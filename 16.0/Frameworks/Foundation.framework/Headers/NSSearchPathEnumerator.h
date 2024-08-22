// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSEARCHPATHENUMERATOR_H
#define NSSEARCHPATHENUMERATOR_H

@class NSEnumerator;



@interface NSSearchPathEnumerator : NSEnumerator {
    NSInteger state;
    NSUInteger directory;
    NSUInteger domainMask;
}




-(id)initWithDirectory:(NSUInteger)arg0 domains:(NSUInteger)arg1 ;
-(id)nextObject;


@end


#endif