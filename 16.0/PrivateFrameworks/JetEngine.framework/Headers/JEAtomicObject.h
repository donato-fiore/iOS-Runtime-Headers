// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JEATOMICOBJECT_H
#define JEATOMICOBJECT_H


#import <Foundation/Foundation.h>


@interface JEAtomicObject : NSObject

@property (retain) id *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithInitialValue:(id)arg0 ;


@end


#endif