// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLFRAMEELEMENT_H
#define DOMHTMLFRAMEELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMDocument.h"
#import "WebFrame.h"
#import "DOMAbstractView.h"

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (readonly) DOMDocument *contentDocument;
@property (readonly, nonatomic) WebFrame *contentFrame;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *frameBorder;
@property (readonly) int height;
@property (copy) NSString *location;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property BOOL noResize;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (readonly) int width;


-(int)structuralComplexityContribution;


@end


#endif