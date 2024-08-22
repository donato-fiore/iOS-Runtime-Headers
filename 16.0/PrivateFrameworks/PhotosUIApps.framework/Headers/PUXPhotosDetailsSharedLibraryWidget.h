// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUXPHOTOSDETAILSSHAREDLIBRARYWIDGET_H
#define PUXPHOTOSDETAILSSHAREDLIBRARYWIDGET_H

@class TtC12PhotosUIApps19PhotosDetailsWidget, PXPhotosDetailsContext, NSString;
@protocol PXWidgetInteractionDelegate;



@interface PUXPhotosDetailsSharedLibraryWidget : TtC12PhotosUIApps19PhotosDetailsWidget {
    ? contextObservation;
}


@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, weak) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate; // ivar: widgetInteractionDelegate


-(id)init;


@end


#endif