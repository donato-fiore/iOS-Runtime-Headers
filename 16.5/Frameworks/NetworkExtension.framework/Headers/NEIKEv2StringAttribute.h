// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2STRINGATTRIBUTE_H
#define NEIKEV2STRINGATTRIBUTE_H

@class NSString;
@protocol NSCopying;


#import "NEIKEv2ConfigurationAttribute.h"

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

 {
    NSString *_stringValue;
    NSUInteger _customType;
}


@property (readonly) NSString *stringValue;


+(id)copyTypeDescription;
-(NSUInteger)attributeType;
-(NSUInteger)valueType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initCustomWithAttributeType:(NSUInteger)arg0 attributeName:(id)arg1 stringValue:(id)arg2 ;
-(id)initWithStringValue:(id)arg0 ;


@end


#endif