// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUDOMELEMENT_H
#define SUDOMELEMENT_H

@class UIImage, DOMElement, NSString, UIWebView;

#import <Foundation/Foundation.h>


@interface SUDOMElement : NSObject {
    UIImage *_image;
}


@property (readonly, nonatomic) DOMElement *element; // ivar: _element
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) UIImage *imageRepresentation;
@property (readonly, nonatomic) NSString *innerText;
@property (retain, nonatomic) UIWebView *webView; // ivar: _webView


+(struct CGRect )frameForDOMElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 ;
-(id)newImageView;
-(id)newLabelForElementWithText:(id)arg0 ;
-(void)dealloc;
-(void)setProperty:(id)arg0 value:(id)arg1 ;


@end


#endif