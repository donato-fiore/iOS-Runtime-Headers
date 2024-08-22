// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETSSESSION_H
#define PXASSETSSESSION_H

@class NSString;
@protocol PXSectionedDataSourceManagerObserver;


#import "PXObservable.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedDataSourceManager.h"
#import "PXUIMediaProvider.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"

@interface PXAssetsSession : PXObservable <PXSectionedDataSourceManagerObserver>



@property (retain, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 selectionManager:(id)arg2 ;
-(id)mutableChangeObject;
-(void)_updateDataSourceDependentProperties;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif