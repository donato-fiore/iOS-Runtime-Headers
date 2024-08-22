// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JEATOMICANYOBJECT_H
#define JEATOMICANYOBJECT_H


#import <Foundation/Foundation.h>


@interface JEAtomicAnyObject : NSObject

@property (retain) id *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithValue:(id)arg0 ;


@end


#endif