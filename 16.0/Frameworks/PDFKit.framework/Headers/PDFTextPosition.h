// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFTEXTPOSITION_H
#define PDFTEXTPOSITION_H

@class UITextPosition;


#import "PDFPage.h"

@interface PDFTextPosition : UITextPosition {
    PDFPage *_page;
    NSInteger _offset;
}




-(NSInteger)offset;
-(id)description;
-(id)initWithOffset:(NSInteger)arg0 onPage:(id)arg1 ;
-(id)page;


@end


#endif