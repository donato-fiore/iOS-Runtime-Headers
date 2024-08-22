// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMPROPERTYDESCRIPTOR_H
#define RLMPROPERTYDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RLMPropertyDescriptor : NSObject

@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName


+(id)descriptorWithClass:(Class)arg0 propertyName:(id)arg1 ;


@end


#endif