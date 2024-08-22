// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOPICKERFILESIZETOOLBARPROVIDER_H
#define PUPHOTOPICKERFILESIZETOOLBARPROVIDER_H

@class UIBarButtonItem, UILabel, UITableViewController, NSArray, NSSet, NSMutableDictionary, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PUPhotosGridViewSupplementalToolbarProvider, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerFileSizeToolbarProviderDelegate;

#import <Foundation/Foundation.h>

#import "PUPhotoPickerResizeTaskDescriptor.h"

@interface PUPhotoPickerFileSizeToolbarProvider : NSObject <UITableViewDataSource, UITableViewDelegate, PUPhotosGridViewSupplementalToolbarProvider>

 {
    id<PUPhotosGridViewSupplementalToolbarDataSource> *_dataSource;
    UIBarButtonItem *_sizePickerItem;
    UILabel *_sizePickerDescriptionLabel;
    UITableViewController *_sizePickerViewController;
    BOOL _preparingToPresentSizePickerViewController;
    NSArray *_toolbarItems;
    NSArray *_resizeTaskDescriptors;
    NSSet *_cachedAssetSet;
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;
    NSMutableDictionary *_taskDescriptorsToCachedLabels;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoPickerFileSizeToolbarProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldShowToolbar;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *toolbarItems;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_computeSelectedIndexPath;
-(id)_localizedLabelForResizeTaskDescriptor:(id)arg0 ;
-(id)_orderedResizeTaskDescriptors;
-(id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
-(id)_sizePickerItem;
-(id)initWithDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_presentSizePicker:(id)arg0 ;
-(void)_updateSizePickerItemIfNeeded;
-(void)_updateTableViewSelection;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif