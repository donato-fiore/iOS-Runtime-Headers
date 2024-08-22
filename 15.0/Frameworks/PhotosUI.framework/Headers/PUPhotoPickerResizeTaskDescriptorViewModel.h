// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOPICKERRESIZETASKDESCRIPTORVIEWMODEL_H
#define PUPHOTOPICKERRESIZETASKDESCRIPTORVIEWMODEL_H

@class PXObservable, NSString, UIMenu, PXInfoUpdater;
@protocol PXInfoProvider, PXInfoUpdaterObserver, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, OS_dispatch_queue;


#import "PUPhotoPickerResizeTaskDescriptor.h"

@interface PUPhotoPickerResizeTaskDescriptorViewModel : PXObservable <PXInfoProvider, PXInfoUpdaterObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoPickerResizeTaskDescriptorViewModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIMenu *fileSizeMenu; // ivar: _fileSizeMenu
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedFileSizeDescription; // ivar: _localizedFileSizeDescription
@property (retain, nonatomic) PXInfoUpdater *localizedFileSizeDescriptionUpdater; // ivar: _localizedFileSizeDescriptionUpdater
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localizedFileSizeDescriptionUpdaterQueue; // ivar: _localizedFileSizeDescriptionUpdaterQueue
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptor *resizeTaskDescriptor; // ivar: _resizeTaskDescriptor
@property (readonly) Class superclass;


-(id)_infoDictionaryForLocalizedTitle:(id)arg0 localizedFileSizeDescription:(id)arg1 ;
-(id)init;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)invalidateAssetsForResizing;
-(void)performChanges:(id)arg0 ;


@end


#endif