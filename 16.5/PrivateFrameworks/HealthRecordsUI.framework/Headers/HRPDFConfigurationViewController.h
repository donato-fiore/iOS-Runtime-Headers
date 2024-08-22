// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRPDFCONFIGURATIONVIEWCONTROLLER_H
#define HRPDFCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController;



@interface HRPDFConfigurationViewController : UIViewController {
    ? tableCellIdentifier;
    ? $__lazy_storage_$_cancelBarButtonItem;
    ? $__lazy_storage_$_actionBarButtonItem;
    ? tableView;
    ? collectionView;
    ? scrollView;
    ? pinchAnimationBackgroundView;
    ? pinchAnimationView;
    ? pinchedPageImageView;
    ? pdfPadding;
    ? $__lazy_storage_$_pdfPaddingConstraints;
    ? state;
    ? previewDataSource;
    ? configurationDataSource;
    ? dataProvider;
    ? reportGenerator;
    ? dataProviderToken;
    ? generatorCancellable;
    ? previewCancellable;
    ? pdfGenerationToken;
    ? queue;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithProfile:(id)arg0 account:(id)arg1 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapSave:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif