// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFHOSTEXTENSIONCONTEXT_H
#define PDFHOSTEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol PDFHostProtocol;


#import "PDFHostViewController.h"

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PDFHostViewController *hostViewController; // ivar: _hostViewController
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)extensionSnapshotToHost:(id)arg0 scale:(CGFloat)arg1 ;
-(void)extensionToHost:(id)arg0 ;


@end


#endif