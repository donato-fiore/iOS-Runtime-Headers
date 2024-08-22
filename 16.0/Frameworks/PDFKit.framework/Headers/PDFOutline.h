// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFOUTLINE_H
#define PDFOUTLINE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PDFOutlinePrivate.h"
#import "PDFAction.h"
#import "PDFDestination.h"
#import "PDFDocument.h"
#import "PDFOutline.h"

@interface PDFOutline : NSObject {
    PDFOutlinePrivate *_private;
}


@property (retain, nonatomic) PDFAction *action;
@property (retain, nonatomic) PDFDestination *destination;
@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) NSUInteger index;
@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger numberOfChildren;
@property (readonly, nonatomic) PDFOutline *parent;


-(BOOL)_addDestinationToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(BOOL)_childDictionaryReferencesParent:(struct CGPDFDictionary *)arg0 ;
-(id)_childArray;
-(id)_firstChild;
-(id)_lastChild;
-(id)_next;
-(id)_previous;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 parent:(id)arg2 ;
-(int)_openDescendantCount;
-(struct CGPDFDictionary *)_srcDictionaryRef;
-(struct __CFDictionary *)createDictionaryRef;
-(void)_addActionToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)_lazilyLoadChildren;
-(void)_removeChildAtIndex:(NSUInteger)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)invalidateDictionaryRef;
-(void)removeFromParent;


@end


#endif