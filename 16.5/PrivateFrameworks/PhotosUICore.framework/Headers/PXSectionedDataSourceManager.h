// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDDATASOURCEMANAGER_H
#define PXSECTIONEDDATASOURCEMANAGER_H

@class NSMutableArray;
@protocol PXMutableSectionedDataSourceManager;


#import "PXObservable.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedChangeDetailsRepository.h"

@interface PXSectionedDataSourceManager : PXObservable <PXMutableSectionedDataSourceManager>

 {
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
}


@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory; // ivar: _changeHistory
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedDataSource *dataSourceIfExists;


-(id)allChangeDetailsFromDataSource:(id)arg0 toDataSource:(id)arg1 ;
-(id)changeDetailsFromDataSource:(id)arg0 toDataSource:(id)arg1 ;
-(id)createInitialDataSource;
-(id)init;
-(id)mutableChangeObject;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)queryObserversInterestingObjectReferences;
-(void)_reevaluateWaitingConditions;
-(void)_waitingConditionDidTimeout:(id)arg0 ;
-(void)didCreateInitialDataSource;
-(void)didPublishChanges;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
// -(void)waitForCondition:(id)arg0 timeout:(unk)arg1 completionHandler:(CGFloat)arg2  ;


@end


#endif