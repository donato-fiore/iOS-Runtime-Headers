// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCGPDFFORMWRAPPER_H
#define MUCGPDFFORMWRAPPER_H


#import <Foundation/Foundation.h>


@interface MUCGPDFFormWrapper : NSObject {
    *CGPDFForm _pdfForm;
}


@property (readonly) *CGPDFForm pdfForm;


-(id)initWithForm:(struct CGPDFForm *)arg0 ;
-(void)dealloc;


@end


#endif