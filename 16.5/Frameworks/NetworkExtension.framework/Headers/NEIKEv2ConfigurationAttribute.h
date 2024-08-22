// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2CONFIGURATIONATTRIBUTE_H
#define NEIKEV2CONFIGURATIONATTRIBUTE_H

@class NSString;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>


@interface NEIKEv2ConfigurationAttribute : NSObject <NEPrettyDescription>

 {
    NSString *_customAttributeName;
}


@property (readonly) NSUInteger attributeType;
@property (readonly) NSUInteger valueType;


+(id)copyTypeDescription;
-(id)attributeName;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initEmptyRequest;


@end


#endif