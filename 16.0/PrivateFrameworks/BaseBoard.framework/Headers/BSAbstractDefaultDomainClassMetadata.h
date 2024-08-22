// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSABSTRACTDEFAULTDOMAINCLASSMETADATA_H
#define BSABSTRACTDEFAULTDOMAINCLASSMETADATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BSAbstractDefaultDomainClassMetadata : NSObject {
    Class _clazz;
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}




-(id)description;
-(id)init;


@end


#endif