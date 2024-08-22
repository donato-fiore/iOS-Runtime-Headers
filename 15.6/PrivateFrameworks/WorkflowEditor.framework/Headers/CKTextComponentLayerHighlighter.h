// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTCOMPONENTLAYERHIGHLIGHTER_H
#define CKTEXTCOMPONENTLAYERHIGHLIGHTER_H


#import <Foundation/Foundation.h>

#import "CKTextComponentLayer.h"
#import "CKHighlightOverlayLayer.h"

@interface CKTextComponentLayerHighlighter : NSObject {
    CKTextComponentLayer *_textComponentLayer;
    CKHighlightOverlayLayer *_highlightOverlayLayer;
}


@property (nonatomic) _NSRange highlightedRange; // ivar: _highlightedRange


-(id)initWithTextComponentLayer:(id)arg0 ;
-(void)layoutHighlight;


@end


#endif