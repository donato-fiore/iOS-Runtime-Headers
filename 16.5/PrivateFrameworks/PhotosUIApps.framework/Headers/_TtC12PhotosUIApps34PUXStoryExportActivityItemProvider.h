// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPS34PUXSTORYEXPORTACTIVITYITEMPROVIDER_H
#define _TTC12PHOTOSUIAPPS34PUXSTORYEXPORTACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC12PhotosUIApps34PUXStoryExportActivityItemProvider : UIActivityItemProvider {
    ? storyConfiguration;
    ? aspectRatio;
    ? destinationURL;
    ? exportManager;
    ? iconAsset;
    ? fullSizePlayerExtendedTraitCollectionSnapshot;
    ? delegate;
    ? progressController;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 ;
-(void)cancel;


@end


#endif