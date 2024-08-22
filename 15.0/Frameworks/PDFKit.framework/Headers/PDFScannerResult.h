// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFSCANNERRESULT_H
#define PDFSCANNERRESULT_H


#import <Foundation/Foundation.h>

#import "PDFScannerResultPrivate.h"

@interface PDFScannerResult : NSObject {
    PDFScannerResultPrivate *_private;
}




-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 onPageLayer:(id)arg1 ;
-(BOOL)hasActionsForResult;
-(BOOL)pointIsOnButton:(struct CGPoint )arg0 ;
-(BOOL)pointIsOnButton:(struct CGPoint )arg0 onPageLayer:(id)arg1 ;
-(BOOL)resultIsPastDate;
-(id)ddResult;
-(id)initWithDDScannerResult:(id)arg0 foundOnPage:(id)arg1 ;
-(id)rects;
-(struct CGRect )bounds;
-(struct __DDHighlight *)highlightRef;
-(void)setButtonPressed:(BOOL)arg0 ;
-(void)setHighlightRef:(struct __DDHighlight *)arg0 ;


@end


#endif