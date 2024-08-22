// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLELEMENT_H
#define DOMHTMLELEMENT_H

@class NSString;


#import "DOMElement.h"
#import "DOMHTMLCollection.h"

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *accessKey;
@property (readonly) DOMHTMLCollection *children;
@property (copy) NSString *contentEditable;
@property (copy) NSString *dir;
@property (copy) NSString *idName;
@property (copy) NSString *innerText;
@property (readonly) BOOL isContentEditable;
@property (copy) NSString *lang;
@property (copy) NSString *outerText;
@property int tabIndex;
@property (copy) NSString *title;
@property (readonly, copy) NSString *titleDisplayString;


-(BOOL)autocorrect;
-(BOOL)draggable;
-(BOOL)hidden;
-(BOOL)spellcheck;
-(BOOL)translate;
-(id)autocapitalize;
-(id)insertAdjacentElement:(id)arg0 element:(id)arg1 ;
-(id)webkitdropzone;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(int)structuralComplexityContribution;
-(void)absolutePosition:(*int)arg0 ;
-(void)click;
-(void)insertAdjacentHTML:(id)arg0 html:(id)arg1 ;
-(void)insertAdjacentText:(id)arg0 text:(id)arg1 ;
-(void)setAutocapitalize:(id)arg0 ;
-(void)setAutocorrect:(BOOL)arg0 ;
-(void)setDraggable:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1 ;
-(void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1 adjustForIOSCaret:(BOOL)arg2 ;
-(void)setSpellcheck:(BOOL)arg0 ;
-(void)setTranslate:(BOOL)arg0 ;
-(void)setWebkitdropzone:(id)arg0 ;


@end


#endif