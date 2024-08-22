// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVALUETYPEPROPERTY_H
#define VSVALUETYPEPROPERTY_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface VSValueTypeProperty : NSObject

@property (copy, nonatomic) NSSet *allowedClasses; // ivar: _allowedClasses
@property (retain, nonatomic) id *initialValue; // ivar: _initialValue
@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)valueTypePropertyWithName:(id)arg0 kind:(NSUInteger)arg1 allowedClasses:(id)arg2 initialValue:(id)arg3 ;


@end


#endif