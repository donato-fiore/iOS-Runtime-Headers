// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUXPHOTOSDETAILSDISCOVERABILITYWIDGET_H
#define PUXPHOTOSDETAILSDISCOVERABILITYWIDGET_H

@class TtC12PhotosUIApps19PhotosDetailsWidget, PXPhotosDetailsContext;
@protocol PXWidgetInteractionDelegate;



@interface PUXPhotosDetailsDiscoverabilityWidget : TtC12PhotosUIApps19PhotosDetailsWidget {
    ? contextObservation;
}


@property (nonatomic, readonly) NSInteger contentLayoutStyle;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, weak) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate; // ivar: widgetInteractionDelegate


-(id)init;


@end


#endif