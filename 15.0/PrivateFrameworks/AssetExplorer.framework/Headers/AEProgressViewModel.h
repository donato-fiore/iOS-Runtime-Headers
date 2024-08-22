// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEPROGRESSVIEWMODEL_H
#define AEPROGRESSVIEWMODEL_H

@class PXObservable, PXAssetsDataSourceManager, NSDictionary, NSString;
@protocol PXAssetsDataSourceManagerObserver;


#import "AEProgressViewModelSnapshot.h"

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver>

 {
    AEProgressViewModelSnapshot *_currentSnapshot;
}


@property (readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // ivar: __dataSourceManager
@property (retain, nonatomic, setter=_setProgressByAsset:) NSDictionary *_progressByAsset; // ivar: __progressByAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
@property (readonly) Class superclass;


-(id)_createSnapshot;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)mutableChangeObject;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(void)cancelProgressForAssetUUIDs:(id)arg0 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setProgress:(id)arg0 forAssetReference:(id)arg1 ;


@end


#endif