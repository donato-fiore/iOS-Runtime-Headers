// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXASSETSDATASOURCEMANAGER_H
#define PUPXASSETSDATASOURCEMANAGER_H

@class NSString, PXAssetsDataSourceManager;
@protocol PXAssetsDataSourceManagerObserver;


#import "PUAssetsDataSourceManager.h"

@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>



@property (nonatomic, setter=_setCurrentUpdateId:) NSInteger _currentUpdateID; // ivar: __currentUpdateID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetsDataSourceManager *underlyingDataSourceManager; // ivar: _underlyingDataSourceManager


-(id)init;
-(id)initWithUnderlyingDataSourceManager:(id)arg0 ;
-(id)photosDataSource;
-(void)_handleScheduledUpdateWithID:(NSInteger)arg0 ;
-(void)_scheduleUpdate;
-(void)_update;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif