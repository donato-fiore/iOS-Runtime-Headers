// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPS32PHOTOSDETAILSEXIFWIDGETVIEWMODEL_H
#define _TTC12PHOTOSUIAPPS32PHOTOSDETAILSEXIFWIDGETVIEWMODEL_H

@class TtC12PhotosUIApps28PhotosDetailsWidgetViewModel;



@interface _TtC12PhotosUIApps32PhotosDetailsEXIFWidgetViewModel : TtC12PhotosUIApps28PhotosDetailsWidgetViewModel {
    ? _isContentLoaded;
    ? assetDidChange;
    ? isLoadingData;
    ? _showRawEXIF;
    ? _videoHDRBadgeTitle;
    ? makeAndModelDescription;
    ? formattedLensDescription;
    ? unformattedLensDescription;
    ? megaPixelsDescription;
    ? ax_megaPixelsDescription;
    ? _isMegaPixelDescriptionLoaded;
    ? resolutionDescription;
    ? ax_resolutionDescription;
    ? _isResolutionDescriptionLoaded;
    ? fileSizeDescription;
    ? _isFileSizeDescriptionDescriptionLoaded;
    ? localizedFormatDescription;
    ? symbolNames;
    ? hasCameraSettings;
    ? cameraSettings;
    ? isVideo;
    ? isVideoHDR;
    ? localizedSemanticStyleDisplayString;
    ? metadataProcessingQueue;
}




-(void)photoLibraryDidChange:(id)arg0 ;


@end


#endif