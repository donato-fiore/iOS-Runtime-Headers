// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PADCOUNTER_H
#define PADCOUNTER_H


#import <Foundation/Foundation.h>


@interface PADCounter : NSObject {
    NSUInteger _counter;
}




-(NSUInteger)getValue;
-(id)init;
-(void)decrement;
-(void)decrementByValue:(NSUInteger)arg0 ;
-(void)increment;
-(void)incrementByValue:(NSUInteger)arg0 ;
-(void)setToValue:(NSUInteger)arg0 ;


@end


#endif