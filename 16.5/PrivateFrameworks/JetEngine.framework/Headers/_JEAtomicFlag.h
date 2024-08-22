// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _JEATOMICFLAG_H
#define _JEATOMICFLAG_H


#import <Foundation/Foundation.h>


@interface _JEAtomicFlag : NSObject {
    uint8_t _value;
}




-(BOOL)compareWithValue:(BOOL)arg0 andExchangeWithValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithInitialValue:(BOOL)arg0 ;


@end


#endif