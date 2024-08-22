// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLERECODATASOURCE_H
#define PXPEOPLERECODATASOURCE_H

@class NSString, PHFetchResult, PHPerson, NSMutableIndexSet;
@protocol PXPhotoLibraryUIChangeObserver, PXPeopleRecoDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPeopleRecoDataSource : NSObject <PXPhotoLibraryUIChangeObserver>



@property (readonly, weak, nonatomic) NSObject<PXPeopleRecoDataSourceDelegate> *dataSourceDelegate; // ivar: _dataSourceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *faceCrops; // ivar: _faceCrops
@property (retain, nonatomic) PHFetchResult *faces; // ivar: _faces
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSMutableIndexSet *rejectedFaceCropIndexes; // ivar: _rejectedFaceCropIndexes
@property (readonly, nonatomic) NSMutableIndexSet *rejectedFaceIndexes; // ivar: _rejectedFaceIndexes
@property (readonly) Class superclass;


-(BOOL)hasAnyRejectedItems;
-(BOOL)isIndexRejected:(NSUInteger)arg0 ;
-(BOOL)shouldAllowCommitting;
-(BOOL)toggleRejectionForIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfItems;
-(id)initWithPerson:(id)arg0 dataSourceDelegate:(id)arg1 ;
-(void)_clearIndexes;
-(void)_fetchEverythingForPerson:(id)arg0 ;
-(void)commitChanges;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)requestImageForItemAtIndex:(NSUInteger)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 imageBlock:(id)arg3 ;


@end


#endif