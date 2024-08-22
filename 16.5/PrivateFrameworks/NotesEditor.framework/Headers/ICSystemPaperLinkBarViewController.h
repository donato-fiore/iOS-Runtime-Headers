// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERLINKBARVIEWCONTROLLER_H
#define ICSYSTEMPAPERLINKBARVIEWCONTROLLER_H

@class UIViewController;



@interface ICSystemPaperLinkBarViewController : UIViewController {
    ? linkController;
    ? addLinkClient;
    ? noteEditorViewController;
    ? linkControllerDelegate;
    ? attachmentWasAddedObservation;
    ? attachmentWasDeletedObservation;
    ? blurView;
    ? linkDescriptionLabel;
    ? addLinkButton;
    ? lastFetchedFilteredLinks;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNoteEditorViewController:(id)arg0 ;
-(void)didTapAddLinkButtonWithButton:(id)arg0 ;
-(void)refresh;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif