// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGERANGE_H
#define PDFPAGERANGE_H


#import <Foundation/Foundation.h>

#import "PDFPageRangePrivate.h"

@interface PDFPageRange : NSObject {
    PDFPageRangePrivate *_private;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithPage:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)page;
-(struct _NSRange )range;
-(void)setPage:(id)arg0 ;
-(void)setRange:(struct _NSRange )arg0 ;


@end


#endif