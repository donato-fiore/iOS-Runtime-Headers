// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMHTMLSELECTELEMENT_H
#define DOMHTMLSELECTELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLFormElement.h"
#import "DOMHTMLOptionsCollection.h"

@interface DOMHTMLSelectElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (readonly) int length;
@property BOOL multiple;
@property (copy) NSString *name;
@property (readonly) DOMHTMLOptionsCollection *options;
@property int selectedIndex;
@property int size;
@property (readonly, copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;


-(id)item:(unsigned int)arg0 ;
-(id)listItemAtIndex:(int)arg0 ;
-(id)namedItem:(id)arg0 ;
-(int)structuralComplexityContribution;
-(unsigned int)completeLength;
-(void)_activateItemAtIndex:(int)arg0 ;
-(void)_activateItemAtIndex:(int)arg0 allowMultipleSelection:(BOOL)arg1 ;
-(void)add:(id)arg0 ;
-(void)add:(id)arg0 before:(id)arg1 ;
-(void)remove:(int)arg0 ;


@end


#endif