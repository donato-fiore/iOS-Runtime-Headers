// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLTABLEROWELEMENT_H
#define DOMHTMLTABLEROWELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLCollection.h"

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *bgColor;
@property (readonly) DOMHTMLCollection *cells;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (readonly) int rowIndex;
@property (readonly) int sectionRowIndex;
@property (copy) NSString *vAlign;


-(id)insertCell:(int)arg0 ;
-(void)deleteCell:(int)arg0 ;


@end


#endif