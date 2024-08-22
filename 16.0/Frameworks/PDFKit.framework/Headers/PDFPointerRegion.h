// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPOINTERREGION_H
#define PDFPOINTERREGION_H


#import <Foundation/Foundation.h>

#import "PDFPointerRegionPrivate.h"

@interface PDFPointerRegion : NSObject {
    PDFPointerRegionPrivate *_private;
}




-(id)identifier;
-(id)initWithRect:(struct CGRect )arg0 identifier:(id)arg1 ;
-(struct CGRect )rect;
-(void)setIdentifier:(id)arg0 ;
-(void)setRect:(struct CGRect )arg0 ;


@end


#endif