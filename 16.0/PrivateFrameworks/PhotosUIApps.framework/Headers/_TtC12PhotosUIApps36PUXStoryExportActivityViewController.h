// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12PHOTOSUIAPPS36PUXSTORYEXPORTACTIVITYVIEWCONTROLLER_H
#define _TTC12PHOTOSUIAPPS36PUXSTORYEXPORTACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;



@interface _TtC12PhotosUIApps36PUXStoryExportActivityViewController : UIActivityViewController {
    ? exportActivityItemProvider;
    ? exportPreviewViewController;
    ? errorReporter;
    ? fullSizePlayerAspect;
    ? presentingFailureAlert;
    ? $__lazy_storage_$_linkMetadata;
}


@property (nonatomic, copy) id *completionWithItemsHandler;
@property (nonatomic) NSInteger modalPresentationStyle;


-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;


@end


#endif