// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRANDOMNUMBERGENERATOR_H
#define ICRANDOMNUMBERGENERATOR_H


#import <Foundation/Foundation.h>


@interface ICRandomNumberGenerator : NSObject {
    unsigned int _randomSeed;
}




-(CGFloat)randomFloat;
-(NSUInteger)randomIndexMin:(NSUInteger)arg0 max:(NSUInteger)arg1 ;
-(id)initWithSeed:(unsigned int)arg0 ;
-(id)randomObject:(id)arg0 ;


@end


#endif