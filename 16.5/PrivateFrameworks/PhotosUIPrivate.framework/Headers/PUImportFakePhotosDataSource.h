// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTFAKEPHOTOSDATASOURCE_H
#define PUIMPORTFAKEPHOTOSDATASOURCE_H

@class PXPhotosDataSource, PXImportAssetsDataSource;



@interface PUImportFakePhotosDataSource : PXPhotosDataSource

@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource; // ivar: _importDataSource


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithImportDataSource:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg0 reverseOrder:(BOOL)arg1 ;


@end


#endif