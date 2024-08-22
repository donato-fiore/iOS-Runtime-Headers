// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMHTMLINPUTELEMENT_H
#define DOMHTMLINPUTELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"
#import "DOMFileList.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLInputElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *accept;
@property (copy) NSString *accessKey;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (readonly, copy) NSString *altDisplayString;
@property BOOL autofocus;
@property BOOL checked;
@property BOOL defaultChecked;
@property (copy) NSString *defaultValue;
@property BOOL disabled;
@property (retain) DOMFileList *files;
@property (readonly) DOMHTMLFormElement *form;
@property BOOL indeterminate;
@property int maxLength;
@property BOOL multiple;
@property (copy) NSString *name;
@property BOOL readOnly;
@property int selectionEnd;
@property int selectionStart;
@property (copy) NSString *size;
@property (copy) NSString *src;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;


-(BOOL)_isAutoFilledAndViewable;
-(BOOL)_isAutofilled;
-(BOOL)_isEdited;
-(BOOL)_isTextField;
-(BOOL)canShowPlaceholder;
-(BOOL)capture;
-(BOOL)checkValidity;
-(BOOL)incremental;
-(BOOL)required;
-(id)_autofillContext;
-(id)autocomplete;
-(id)dirName;
-(id)endPosition;
-(id)labels;
-(id)list;
-(id)max;
-(id)min;
-(id)pattern;
-(id)placeholder;
-(id)selectionDirection;
-(id)startPosition;
-(id)step;
-(id)validationMessage;
-(int)_autocapitalizeType;
-(int)structuralComplexityContribution;
-(unsigned int)height;
-(unsigned int)width;
-(void)_setAutoFilledAndViewable:(BOOL)arg0 ;
-(void)_setAutofilled:(BOOL)arg0 ;
-(void)click;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)select;
-(void)setAutocomplete:(id)arg0 ;
-(void)setCanShowPlaceholder:(BOOL)arg0 ;
-(void)setCapture:(BOOL)arg0 ;
-(void)setCustomValidity:(id)arg0 ;
-(void)setDirName:(id)arg0 ;
-(void)setHeight:(unsigned int)arg0 ;
-(void)setIncremental:(BOOL)arg0 ;
-(void)setMax:(id)arg0 ;
-(void)setMin:(id)arg0 ;
-(void)setPattern:(id)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setRangeText:(id)arg0 ;
-(void)setRangeText:(id)arg0 start:(unsigned int)arg1 end:(unsigned int)arg2 selectionMode:(id)arg3 ;
-(void)setRequired:(BOOL)arg0 ;
-(void)setSelectionDirection:(id)arg0 ;
-(void)setSelectionRange:(int)arg0 end:(int)arg1 ;
-(void)setStep:(id)arg0 ;
-(void)setWidth:(unsigned int)arg0 ;
-(void)stepDown:(int)arg0 ;
-(void)stepUp:(int)arg0 ;


@end


#endif