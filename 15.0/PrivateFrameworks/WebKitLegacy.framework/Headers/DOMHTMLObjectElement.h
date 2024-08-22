// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLOBJECTELEMENT_H
#define DOMHTMLOBJECTELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"
#import "DOMDocument.h"
#import "WebFrame.h"
#import "DOMHTMLFormElement.h"

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *align;
@property (copy) NSString *archive;
@property (copy) NSString *border;
@property (copy) NSString *code;
@property (copy) NSString *codeBase;
@property (copy) NSString *codeType;
@property (readonly) DOMDocument *contentDocument;
@property (readonly, nonatomic) WebFrame *contentFrame;
@property (copy) NSString *data;
@property BOOL declare;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *height;
@property int hspace;
@property (copy) NSString *name;
@property (copy) NSString *standby;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property int vspace;
@property (copy) NSString *width;




@end


#endif