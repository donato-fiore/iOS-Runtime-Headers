// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS19PHOTOSDETAILSWIDGET_H
#define _TTC12PHOTOSUIAPPS19PHOTOSDETAILSWIDGET_H

@class PXPhotosDetailsContext, PXWidgetSpec;
@protocol PXWidget, PXAnonymousView, PXWidgetDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps19PhotosDetailsWidget : NSObject <PXWidget>

 {
    ? _context;
    ? _viewModel;
    ? _spec;
}


@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (nonatomic, weak) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: widgetDelegate


-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)init;


@end


#endif