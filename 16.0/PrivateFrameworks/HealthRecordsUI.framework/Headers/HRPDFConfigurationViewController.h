// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRPDFCONFIGURATIONVIEWCONTROLLER_H
#define HRPDFCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController;



@interface HRPDFConfigurationViewController : UIViewController {
    ? tableCellIdentifier;
    ? $__lazy_storage_$_cancelBarButtonItem;
    ? $__lazy_storage_$_actionBarButtonItem;
    ? $__lazy_storage_$_spinnerView;
    ? $__lazy_storage_$_noDataLabel;
    ? tableView;
    ? collectionView;
    ? scrollView;
    ? $__lazy_storage_$_spinnerContainerView;
    ? pinchAnimationBackgroundView;
    ? pinchAnimationView;
    ? pinchedPageImageView;
    ? pdfPadding;
    ? $__lazy_storage_$_pdfPaddingConstraints;
    ? previewImages;
    ? state;
    ? dataSource;
    ? dataProvider;
    ? reportGenerator;
    ? dataProviderToken;
    ? generatorCancellable;
    ? previewCancellable;
    ? queue;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 account:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapSave:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif