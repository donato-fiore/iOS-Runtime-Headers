// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFEXTENSIONCONTEXT_H
#define PDFEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol PDFExtensionProtocol;


#import "PDFExtensionViewController.h"

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PDFExtensionViewController *extensionViewController; // ivar: _extensionViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)hostToExtension:(id)arg0 ;


@end


#endif