// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWASSETSDATASOURCEMANAGER_H
#define PUREVIEWASSETSDATASOURCEMANAGER_H

@class NSString;
@protocol PUReviewDataSourceChangeObserver, PUDisplayAssetCollection, PUReviewAssetsDataSourceManagerDelegate;


#import "PUAssetsDataSourceManager.h"
#import "PUReviewDataSource.h"

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver>



@property (readonly, nonatomic) NSObject<PUDisplayAssetCollection> *_containingAssetCollection; // ivar: __containingAssetCollection
@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // ivar: __reviewDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUReviewAssetsDataSourceManagerDelegate> *reviewDelegate; // ivar: _reviewDelegate
@property (readonly) Class superclass;


-(id)init;
-(id)initWithReviewDataSource:(id)arg0 ;
-(void)_updateWithReviewDataSource:(id)arg0 changeDetails:(id)arg1 ;
-(void)dealloc;
-(void)reviewDataSourceDidChange:(id)arg0 changeDetails:(id)arg1 ;


@end


#endif