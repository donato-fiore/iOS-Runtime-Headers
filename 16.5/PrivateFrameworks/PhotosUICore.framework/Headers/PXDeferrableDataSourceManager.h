// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDEFERRABLEDATASOURCEMANAGER_H
#define PXDEFERRABLEDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol PXSectionedDataSourceManagerObserver, PXDeferrableDataSourceManagerDelegate;


#import "PXSectionedDataSourceManager.h"
#import "PXSectionedDataSource.h"

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver>

 {
    BOOL _hasInitialDataSource;
    BOOL _clientIsHandlingDataSourceTransition;
    PXSectionedDataSource *_pendingDataSource;
    NSArray *_pendingDataSourceChangeDetails;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXDeferrableDataSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXSectionedDataSourceManager *underlyingDataSourceManager; // ivar: _underlyingDataSourceManager


-(BOOL)_canAttemptDataSourceChanges;
-(id)changeDetailsFromDataSource:(id)arg0 toDataSource:(id)arg1 ;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 ;
-(void)_finishTransitionToDataSource:(id)arg0 changeDetailsArray:(id)arg1 ;
-(void)_internal_setDataSource:(id)arg0 changeDetailsArray:(id)arg1 ;
-(void)_setPendingDataSource:(id)arg0 changeDetailsArray:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)resumeDataSourceChanges;
-(void)setDataSource:(id)arg0 changeDetails:(id)arg1 ;
-(void)setDataSource:(id)arg0 changeDetailsArray:(id)arg1 ;


@end


#endif