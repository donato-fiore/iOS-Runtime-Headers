// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGPROPERTYVALUE_H
#define KGPROPERTYVALUE_H

@protocol MAPropertyTypeProtocol;

#import <Foundation/Foundation.h>


@interface KGPropertyValue : NSObject

@property (readonly, nonatomic) NSUInteger dataType;
@property (readonly, nonatomic) NSObject<MAPropertyTypeProtocol> *maPropertyValue;


+(id)kgPropertiesWithMAProperties:(id)arg0 ;
+(id)kgPropertyValueWithMAPropertyValue:(id)arg0 ;
-(id)description;
-(id)initForSubclasses;


@end


#endif