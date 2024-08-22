// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLTEXTAREAELEMENT_H
#define DOMHTMLTEXTAREAELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (copy) NSString *accessKey;
@property BOOL autofocus;
@property int cols;
@property (copy) NSString *defaultValue;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *name;
@property BOOL readOnly;
@property int rows;
@property int selectionEnd;
@property int selectionStart;
@property (readonly, copy) NSString *type;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;


-(BOOL)_isEdited;
-(BOOL)canShowPlaceholder;
-(BOOL)required;
-(id)autocomplete;
-(id)dirName;
-(id)endPosition;
-(id)labels;
-(id)placeholder;
-(id)selectionDirection;
-(id)startPosition;
-(id)wrap;
-(int)_autocapitalizeType;
-(int)maxLength;
-(int)structuralComplexityContribution;
-(unsigned int)textLength;
-(void)select;
-(void)setAutocomplete:(id)arg0 ;
-(void)setCanShowPlaceholder:(BOOL)arg0 ;
-(void)setDirName:(id)arg0 ;
-(void)setMaxLength:(int)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setRangeText:(id)arg0 ;
-(void)setRangeText:(id)arg0 start:(unsigned int)arg1 end:(unsigned int)arg2 selectionMode:(id)arg3 ;
-(void)setRequired:(BOOL)arg0 ;
-(void)setSelectionDirection:(id)arg0 ;
-(void)setSelectionRange:(int)arg0 end:(int)arg1 ;
-(void)setWrap:(id)arg0 ;


@end


#endif