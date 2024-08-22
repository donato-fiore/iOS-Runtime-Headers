// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSDETAILSVIEWMODEL_H
#define PXPHOTOSDETAILSVIEWMODEL_H

@class NSString, NSSet;
@protocol PXMutablePhotosDetailsViewModel;


#import "PXObservable.h"
#import "PXSectionedSelectionManager.h"

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *disabledActionTypes; // ivar: _disabledActionTypes
@property (readonly, nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled; // ivar: _faceModeEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isSelecting) BOOL selecting; // ivar: _selecting
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode; // ivar: _supportsFaceMode
@property (readonly, nonatomic) BOOL supportsSelection; // ivar: _supportsSelection


-(id)mutableChangeObject;
-(void)performChanges:(id)arg0 ;


@end


#endif