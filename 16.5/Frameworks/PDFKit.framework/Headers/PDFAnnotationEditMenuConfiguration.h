// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFANNOTATIONEDITMENUCONFIGURATION_H
#define PDFANNOTATIONEDITMENUCONFIGURATION_H

@class UIEditMenuConfiguration;


#import "PDFAnnotation.h"

@interface PDFAnnotationEditMenuConfiguration : UIEditMenuConfiguration

@property (retain) PDFAnnotation *annotation; // ivar: _annotation


+(id)configurationWithIdentifier:(id)arg0 sourcePoint:(struct CGPoint )arg1 ;


@end


#endif