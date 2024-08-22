// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12PHOTOSUIAPPS32PHOTOSDETAILSTIMEWIDGETVIEWMODEL_H
#define _TTC12PHOTOSUIAPPS32PHOTOSDETAILSTIMEWIDGETVIEWMODEL_H

@class TtC12PhotosUIApps28PhotosDetailsWidgetViewModel;
@protocol PHPhotoLibraryChangeObserver;



@interface _TtC12PhotosUIApps32PhotosDetailsTimeWidgetViewModel : TtC12PhotosUIApps28PhotosDetailsWidgetViewModel <PHPhotoLibraryChangeObserver>

 {
    ? fileName;
    ? isiCloudEnabled;
    ? isSyndicatedGuestAsset;
    ? preferredContentSize;
    ? _cloudLocalState;
    ? _date;
    ? _timeZone;
}




-(void)clipBoardChangedWithPasteboardNotification:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif