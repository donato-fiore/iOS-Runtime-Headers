// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OIXMLTEXTNODE_H
#define OIXMLTEXTNODE_H

@class NSString;


#import "OIXMLNode.h"

@interface OIXMLTextNode : OIXMLNode {
    NSString *_value;
}




+(id)textNodeWithStringValue:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStringValue:(id)arg0 ;
-(id)name;
-(id)stringValue;
-(void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif