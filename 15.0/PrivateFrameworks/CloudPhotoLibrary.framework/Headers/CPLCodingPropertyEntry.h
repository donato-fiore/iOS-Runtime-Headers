// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLCODINGPROPERTYENTRY_H
#define CPLCODINGPROPERTYENTRY_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CPLCodingPropertyEntry : NSObject

@property (nonatomic) *objc_ivar ivar; // ivar: _ivar
@property (retain, nonatomic) NSSet *propertyClasses; // ivar: _propertyClasses
@property (nonatomic) SEL propertyGetter; // ivar: _propertyGetter
@property (nonatomic) *unk propertyGetterIMP; // ivar: _propertyGetterIMP
@property (nonatomic) SEL propertySetter; // ivar: _propertySetter
@property (nonatomic) *unk propertySetterIMP; // ivar: _propertySetterIMP
@property (nonatomic) char propertyType; // ivar: _propertyType
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (copy, nonatomic) NSString *structName; // ivar: _structName


-(*void)ivarAddrForObject:(id)arg0 ;
-(id)ivarValueForObject:(id)arg0 ;


@end


#endif