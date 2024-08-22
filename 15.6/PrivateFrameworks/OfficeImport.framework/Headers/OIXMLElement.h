// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OIXMLELEMENT_H
#define OIXMLELEMENT_H

@class NSString;


#import "OIXMLNode.h"

@interface OIXMLElement : OIXMLNode {
    NSString *_name;
    id *_attributes;
    id *_children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
    unsigned char _type;
}




+(id)elementWithType:(unsigned char)arg0 ;
+(id)elementWithType:(unsigned char)arg0 stringValue:(id)arg1 ;
-(BOOL)isEmptyHTMLElement;
-(NSInteger)attributeCount;
-(NSInteger)childrenCount;
-(id)closingTagString;
-(id)contentString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(unsigned char)arg0 ;
-(id)initWithType:(unsigned char)arg0 stringValue:(id)arg1 ;
-(id)name;
-(id)openingTagString;
-(id)stringValue;
-(void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1 ;
-(void)addAttribute:(id)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif