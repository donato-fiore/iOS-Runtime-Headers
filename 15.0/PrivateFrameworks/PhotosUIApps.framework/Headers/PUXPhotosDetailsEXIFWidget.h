// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUXPHOTOSDETAILSEXIFWIDGET_H
#define PUXPHOTOSDETAILSEXIFWIDGET_H

@class TtC12PhotosUIApps19PhotosDetailsWidget, NSString;



@interface PUXPhotosDetailsEXIFWidget : TtC12PhotosUIApps19PhotosDetailsWidget

@property (nonatomic, readonly) BOOL hasLoadedContentData;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;


-(id)init;
-(void)loadContentData;


@end


#endif