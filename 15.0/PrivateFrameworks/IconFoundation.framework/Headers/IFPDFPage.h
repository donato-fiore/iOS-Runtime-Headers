// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IFPDFPAGE_H
#define IFPDFPAGE_H


#import <Foundation/Foundation.h>


@interface IFPDFPage : NSObject

@property *CGPDFPage pdfPage; // ivar: _pdfPage


-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithCGPDFPage:(struct CGPDFPage *)arg0 ;
-(void)dealloc;


@end


#endif