// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUACTIVITYSHARINGVIEWMODEL_H
#define PUACTIVITYSHARINGVIEWMODEL_H

@class PXObservable, PHFetchResult, NSString, PHPerson, PXPhotosDataSource;
@protocol PXDisplayAsset;


#import "PUPhotoSelectionManager.h"

@interface PUActivitySharingViewModel : PXObservable

@property (readonly, nonatomic, getter=isActionSheet) BOOL actionSheet; // ivar: _actionSheet
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // ivar: _collectionListFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (retain, nonatomic) PUPhotoSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) NSInteger sourceOrigin; // ivar: _sourceOrigin


-(id)init;
-(id)initWithActivitySharingConfiguration:(id)arg0 ;
-(id)mutableChangeObject;
-(void)performChanges:(id)arg0 ;


@end


#endif