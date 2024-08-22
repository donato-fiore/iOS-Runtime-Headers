// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLLINKELEMENT_H
#define DOMHTMLLINKELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"
#import "DOMStyleSheet.h"

@interface DOMHTMLLinkElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *charset;
@property BOOL disabled;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *media;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (readonly) DOMStyleSheet *sheet;
@property (copy) NSString *target;
@property (copy) NSString *type;


-(BOOL)_mediaQueryMatchesForOrientation:(int)arg0 ;
-(id)as;
-(id)crossOrigin;
-(void)setAs:(id)arg0 ;
-(void)setCrossOrigin:(id)arg0 ;


@end


#endif