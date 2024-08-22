// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS39PHOTOSDETAILSSYNDICATIONWIDGETVIEWMODEL_H
#define _TTC12PHOTOSUIAPPS39PHOTOSDETAILSSYNDICATIONWIDGETVIEWMODEL_H

@class TtC12PhotosUIApps37PhotosDetailsDiscoverabilityViewModel;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;



@interface _TtC12PhotosUIApps39PhotosDetailsSyndicationWidgetViewModel : TtC12PhotosUIApps37PhotosDetailsDiscoverabilityViewModel <PXContentSyndicationAttributionInfoChangeDelegate>

 {
    ? attributionInfo;
    ? appAttributionModel;
    ? _syndicationContactName;
    ? _syndicationContactImage;
    ? _syndicationSharedWithTitle;
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