// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEWRAPPEDASSETSDATASOURCE_H
#define AEWRAPPEDASSETSDATASOURCE_H

@class PXAssetsDataSource, PUAssetsDataSource;



@interface AEWrappedAssetsDataSource : PXAssetsDataSource

@property (readonly, nonatomic) PUAssetsDataSource *_reviewAssetsDataSource; // ivar: __reviewAssetsDataSource


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)initWithReviewAssetsDataSource:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif