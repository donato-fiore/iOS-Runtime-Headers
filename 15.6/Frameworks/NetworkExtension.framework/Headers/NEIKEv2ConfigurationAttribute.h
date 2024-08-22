// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CONFIGURATIONATTRIBUTE_H
#define NEIKEV2CONFIGURATIONATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NEIKEv2ConfigurationAttribute : NSObject

@property (readonly) NSUInteger attributeType;
@property (retain) NSString *customAttributeName; // ivar: _customAttributeName
@property (readonly) NSUInteger valueType;


+(id)copyTypeDescription;
-(id)attributeName;
-(id)initEmptyRequest;


@end


#endif