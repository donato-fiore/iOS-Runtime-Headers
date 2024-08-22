// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFTEXTRANGE_H
#define PDFTEXTRANGE_H

@class UITextRange;


#import "PDFTextPosition.h"

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}




+(id)textRangeFromSelection:(id)arg0 ;
-(BOOL)isEmpty;
-(id)description;
-(id)end;
-(id)initFromPos:(id)arg0 toPos:(id)arg1 ;
-(id)start;


@end


#endif