// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12PHOTOSUIAPPS28PHOTOSDETAILSWIDGETVIEWMODEL_H
#define _TTC12PHOTOSUIAPPS28PHOTOSDETAILSWIDGETVIEWMODEL_H

@protocol PHPhotoLibraryChangeObserver;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps28PhotosDetailsWidgetViewModel : NSObject <PHPhotoLibraryChangeObserver>

 {
    ? maxContentSizeCategory;
    ? asset;
    ? delegate;
    ? _spec;
    ? context;
}




-(id)init;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)preferredContentSizeDidChangeWithNotification:(id)arg0 ;


@end


#endif