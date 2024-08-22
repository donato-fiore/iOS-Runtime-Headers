// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLTABLESECTIONELEMENT_H
#define DOMHTMLTABLESECTIONELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLCollection.h"

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString *align;
@property (copy) NSString *ch;
@property (copy) NSString *chOff;
@property (readonly) DOMHTMLCollection *rows;
@property (copy) NSString *vAlign;


-(id)insertRow:(int)arg0 ;
-(void)deleteRow:(int)arg0 ;


@end


#endif