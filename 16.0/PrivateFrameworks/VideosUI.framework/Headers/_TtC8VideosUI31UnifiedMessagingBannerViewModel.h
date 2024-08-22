// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI31UNIFIEDMESSAGINGBANNERVIEWMODEL_H
#define _TTC8VIDEOSUI31UNIFIEDMESSAGINGBANNERVIEWMODEL_H

@class TtC8VideosUI9ViewModel;



@interface _TtC8VideosUI31UnifiedMessagingBannerViewModel : TtC8VideosUI9ViewModel {
    ? delegate;
    ? messageViewController;
    ? placementId;
    ? hasSetupViewModel;
    ? hasBannerDisplayed;
}




-(void)handleBannerDidUpdateWithNotification:(id)arg0 ;


@end


#endif