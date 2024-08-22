// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXINBOXMODELDATASOURCE_H
#define PXINBOXMODELDATASOURCE_H

@class NSString, NSArray;
@protocol PXInboxModelDataSourceBase;


#import "PXSectionedDataSource.h"

@interface PXInboxModelDataSource : PXSectionedDataSource <PXInboxModelDataSourceBase>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *models; // ivar: _models
@property (readonly) Class superclass;


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithModels:(id)arg0 ;
-(id)modelAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForModel:(id)arg0 ;


@end


#endif