// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FATARGUMENT_H
#define FATARGUMENT_H


#import <Foundation/Foundation.h>

#import "FATField.h"

@interface FATArgument : NSObject

@property (retain, nonatomic) FATField *field; // ivar: _field
@property (retain, nonatomic) id *value; // ivar: _value


+(id)argumentWithField:(id)arg0 value:(id)arg1 ;


@end


#endif