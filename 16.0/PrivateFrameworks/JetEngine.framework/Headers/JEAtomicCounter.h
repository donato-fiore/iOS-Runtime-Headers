// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JEATOMICCOUNTER_H
#define JEATOMICCOUNTER_H


#import <Foundation/Foundation.h>


@interface JEAtomicCounter : NSObject {
    uint8_t _value;
}


@property (readonly) NSInteger currentValue;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)decrement;
-(NSInteger)increment;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithInitialValue:(NSInteger)arg0 ;


@end


#endif