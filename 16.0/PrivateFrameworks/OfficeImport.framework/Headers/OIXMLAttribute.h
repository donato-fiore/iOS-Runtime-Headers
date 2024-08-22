// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OIXMLATTRIBUTE_H
#define OIXMLATTRIBUTE_H

@class NSString;


#import "OIXMLNode.h"

@interface OIXMLAttribute : OIXMLNode {
    NSString *_name;
    NSString *_value;
}




+(id)attributeWithName:(id)arg0 stringValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 stringValue:(id)arg1 ;
-(id)name;
-(id)stringValue;
-(void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif