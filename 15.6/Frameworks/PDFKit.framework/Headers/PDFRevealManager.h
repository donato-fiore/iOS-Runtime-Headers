// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFREVEALMANAGER_H
#define PDFREVEALMANAGER_H


#import <Foundation/Foundation.h>

#import "PDFRevealManagerPrivate.h"

@interface PDFRevealManager : NSObject {
    PDFRevealManagerPrivate *_private;
}




-(id)PDFRVDocumentContextForPage:(id)arg0 ;
-(id)PDFRVPresenter;
-(id)PDFRVPresentingContextAtPoint:(struct CGPoint )arg0 ;
-(id)initWithPDFView:(id)arg0 ;
-(void)reset;


@end


#endif