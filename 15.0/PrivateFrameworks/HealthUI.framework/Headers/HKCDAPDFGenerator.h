// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCDAPDFGENERATOR_H
#define HKCDAPDFGENERATOR_H


#import <Foundation/Foundation.h>


@interface HKCDAPDFGenerator : NSObject



+(id)PDFTranslator;
-(id)init;
// -(void)_finishGenerationWithURL:(id)arg0 tempFileDescriptor:(int)arg1 completionHandler:(id)arg2 error:(unk)arg3  ;
-(void)_pdfForHTML:(id)arg0 completionHandler:(id)arg1 ;
-(void)generatePDFForCDAXML:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif