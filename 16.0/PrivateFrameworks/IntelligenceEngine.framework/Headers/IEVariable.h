// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IEVARIABLE_H
#define IEVARIABLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IEVariable : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSObject *value; // ivar: _value


-(id)initWithName:(id)arg0 withType:(id)arg1 ;
-(id)initWithName:(id)arg0 withType:(id)arg1 withValue:(id)arg2 ;


@end


#endif