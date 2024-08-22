// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLSCRIPTELEMENT_H
#define DOMHTMLSCRIPTELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *charset;
@property BOOL defer;
@property (copy) NSString *event;
@property (copy) NSString *htmlFor;
@property (copy) NSString *src;
@property (copy) NSString *text;
@property (copy) NSString *type;


-(BOOL)async;
-(id)crossOrigin;
-(id)nonce;
-(void)setAsync:(BOOL)arg0 ;
-(void)setCrossOrigin:(id)arg0 ;
-(void)setNonce:(id)arg0 ;


@end


#endif