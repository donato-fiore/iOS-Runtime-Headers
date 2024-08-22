// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMICIFILTERATTRIBUTE_H
#define HMICIFILTERATTRIBUTE_H

@class HMFObject, NSString;


#import "HMICIFilterAttributeValue.h"

@interface HMICIFilterAttribute : HMFObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *type; // ivar: _type
@property (readonly) HMICIFilterAttributeValue *value; // ivar: _value


-(id)initWithDictionary:(id)arg0 ;


@end


#endif