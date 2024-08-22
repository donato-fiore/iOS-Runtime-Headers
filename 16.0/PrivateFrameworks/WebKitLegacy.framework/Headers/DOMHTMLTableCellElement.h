// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMHTMLTABLECELLELEMENT_H
#define DOMHTMLTABLECELLELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLTableCellElement : DOMHTMLElement

@property (copy) NSString *abbr;
@property (copy) NSString *align;
@property (copy) NSString *axis;
@property (copy) NSString *bgColor;
@property (readonly) int cellIndex;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property int colSpan;
@property (copy) NSString *headers;
@property (copy) NSString *height;
@property BOOL noWrap;
@property int rowSpan;
@property (copy) NSString *scope;
@property (copy) NSString *vAlign;
@property (copy) NSString *width;


-(id)_cellAbove;


@end


#endif