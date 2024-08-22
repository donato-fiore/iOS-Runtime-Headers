// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECHEADERAUTHENTICATIONRESULTPROPERTY_H
#define ECHEADERAUTHENTICATIONRESULTPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ECHeaderAuthenticationResultProperty : NSObject {
    NSUInteger _hash;
}


@property (readonly, copy, nonatomic) NSString *fullProperty; // ivar: _fullProperty
@property (readonly, copy, nonatomic) NSString *property; // ivar: _property
@property (readonly, copy, nonatomic) NSString *propertyType; // ivar: _propertyType
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


-(id)initWithPropertyType:(id)arg0 property:(id)arg1 value:(id)arg2 ;


@end


#endif