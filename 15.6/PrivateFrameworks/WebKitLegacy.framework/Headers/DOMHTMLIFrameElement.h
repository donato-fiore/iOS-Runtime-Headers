// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLIFRAMEELEMENT_H
#define DOMHTMLIFRAMEELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMDocument.h"
#import "WebFrame.h"
#import "DOMAbstractView.h"

@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (copy) NSString *align;
@property (readonly) DOMDocument *contentDocument;
@property (readonly, nonatomic) WebFrame *contentFrame;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *frameBorder;
@property (copy) NSString *height;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (copy) NSString *width;


-(id)sandbox;
-(int)structuralComplexityContribution;
-(void)setSandbox:(id)arg0 ;


@end


#endif