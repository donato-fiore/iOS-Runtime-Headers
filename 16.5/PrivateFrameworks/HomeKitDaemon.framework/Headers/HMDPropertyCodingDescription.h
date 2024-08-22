// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPROPERTYCODINGDESCRIPTION_H
#define HMDPROPERTYCODINGDESCRIPTION_H

@class NSPropertyDescription, NSString;

#import <Foundation/Foundation.h>


@interface HMDPropertyCodingDescription : NSObject {
    NSPropertyDescription *_property;
    NSString *_codingKey;
    NSUInteger _conditions;
}


@property (readonly) NSString *codingKey;
@property (readonly, getter=isConditional) BOOL conditional;
@property (readonly) NSString *name;
@property (readonly) NSPropertyDescription *property;
@property (readonly) NSString *shortDescription;


-(BOOL)shouldIncludeWithConditions:(id)arg0 ;


@end


#endif