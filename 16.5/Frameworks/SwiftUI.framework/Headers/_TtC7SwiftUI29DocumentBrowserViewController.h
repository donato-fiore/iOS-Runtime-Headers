// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI29DOCUMENTBROWSERVIEWCONTROLLER_H
#define _TTC7SWIFTUI29DOCUMENTBROWSERVIEWCONTROLLER_H

@class UIDocumentBrowserViewController;
@protocol UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate;



@interface _TtC7SwiftUI29DocumentBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate>

 {
    ? documentConfigurations;
    ? rootModifier;
    ? configurationMap;
}




-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initForOpeningContentTypes:(id)arg0 ;
-(id)initForOpeningFilesWithContentTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)documentBrowser:(id)arg0 didImportDocumentAtURL:(id)arg1 toDestinationURL:(id)arg2 ;
-(void)documentBrowser:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentBrowser:(id)arg0 didRequestDocumentCreationWithHandler:(id)arg1 ;
-(void)documentBrowser:(id)arg0 failedToImportDocumentAtURL:(id)arg1 error:(id)arg2 ;


@end


#endif