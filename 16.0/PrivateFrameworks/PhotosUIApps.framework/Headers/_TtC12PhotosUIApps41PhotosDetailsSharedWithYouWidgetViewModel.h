// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12PHOTOSUIAPPS41PHOTOSDETAILSSHAREDWITHYOUWIDGETVIEWMODEL_H
#define _TTC12PHOTOSUIAPPS41PHOTOSDETAILSSHAREDWITHYOUWIDGETVIEWMODEL_H

@class TtC12PhotosUIApps28PhotosDetailsWidgetViewModel;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;



@interface _TtC12PhotosUIApps41PhotosDetailsSharedWithYouWidgetViewModel : TtC12PhotosUIApps28PhotosDetailsWidgetViewModel <PXContentSyndicationAttributionInfoChangeDelegate>

 {
    ? attributionInfo;
    ? appAttributionModel;
    ? _syndicationContactName;
    ? _syndicationContactImage;
    ? _syndicationSharedInAttributedTitle;
    ? _syndicationAttributionInfoIsLoading;
    ? _hasSyndicationAttributionInfo;
    ? viewControllerForPresenting;
    ? attributionIdentifier;
    ? senderAppName;
    ? axDescriptionForLoadingIndicator;
    ? axDescriptionForContactImage;
    ? axDescriptionForTextLabels;
    ? axDescriptionForReplyButton;
}




-(void)syndicationAttributionInfoDidChange:(id)arg0 ;


@end


#endif