// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPHIGHLIGHTER_H
#define CPHIGHLIGHTER_H


#import <Foundation/Foundation.h>

#import "CPZone.h"
#import "CPTextLine.h"

@interface CPHighlighter : NSObject {
    CPZone *boundingZone;
    CPTextLine *textLine;
}


@property (readonly, nonatomic) *CGColor color; // ivar: color
@property (nonatomic) *CPPDFStyle highlightedStyle; // ivar: highlightedStyle
@property (nonatomic) *CPPDFStyle style; // ivar: style


+(BOOL)reconstructHighlightFor:(id)arg0 ;
-(id)initWithTextLine:(id)arg0 inZone:(id)arg1 ofColor:(struct CGColor *)arg2 ;
-(void)highlight;


@end


#endif