// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPRINTACTIVITYITEMPROVIDER_H
#define _SFPRINTACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider, UIPrintPageRenderer, NSItemProvider, LPFileMetadata, NSString;
@protocol UIActivityItemsSource;


#import "_SFPrintController.h"

@interface _SFPrintActivityItemProvider : SFActivityItemProvider <UIActivityItemsSource>

 {
    UIPrintPageRenderer *_printPageRenderer;
    NSItemProvider *_pdfItemProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
}


@property (nonatomic) BOOL canVendPDFRepresentation; // ivar: _canVendPDFRepresentation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasReservedPrintInteractionController; // ivar: _hasReservedPrintInteractionController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSItemProvider *pdfItemProvider;
@property (readonly, nonatomic) _SFPrintController *printController; // ivar: _printController
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemsForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItems:(id)arg0 ;
-(id)initWithPrintController:(id)arg0 webView:(id)arg1 ;
-(id)item;


@end


#endif