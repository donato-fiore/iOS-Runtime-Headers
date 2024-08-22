// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLIMAGEELEMENT_H
#define DOMHTMLIMAGEELEMENT_H

@class NSURL, NSString;


#import "DOMHTMLElement.h"

@interface DOMHTMLImageElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteImageURL;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (readonly, copy) NSString *altDisplayString;
@property (copy) NSString *border;
@property (readonly) BOOL complete;
@property int height;
@property int hspace;
@property BOOL isMap;
@property (copy) NSString *longDesc;
@property (copy) NSString *lowsrc;
@property (copy) NSString *name;
@property (readonly) int naturalHeight;
@property (readonly) int naturalWidth;
@property (copy) NSString *src;
@property (copy) NSString *useMap;
@property int vspace;
@property int width;
@property (readonly) int x;
@property (readonly) int y;


-(id)crossOrigin;
-(id)currentSrc;
-(id)dataRepresentation:(BOOL)arg0 ;
-(id)sizes;
-(void)setCrossOrigin:(id)arg0 ;
-(void)setSizes:(id)arg0 ;


@end


#endif