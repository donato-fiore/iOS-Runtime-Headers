// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUJOININGDATASOURCEMANAGER_H
#define PUJOININGDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol PUAssetsDataSourceManagerDelegate;


#import "PUAssetsDataSourceManager.h"

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>



@property (nonatomic, setter=_setCurrentUpdateId:) NSInteger _currentUpdateID; // ivar: __currentUpdateID
@property (readonly, nonatomic) NSArray *_dataSourceManagers; // ivar: __dataSourceManagers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg0 ;
-(id)initWithDataSourceManagers:(id)arg0 ;
-(void)_handleScheduledUpdateWithID:(NSInteger)arg0 ;
-(void)_scheduleUpdate;
-(void)_update;
-(void)assetsDataSourceManager:(id)arg0 didChangeAssetsDataSource:(id)arg1 ;


@end


#endif