// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILEBACKEDASSETSDATASOURCEMANAGER_H
#define PXFILEBACKEDASSETSDATASOURCEMANAGER_H

@class NSDictionary;


#import "PXAssetsDataSourceManager.h"

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager

@property (readonly, nonatomic) NSDictionary *fileURLsBySection; // ivar: _fileURLsBySection


+(id)emptyFileBackedDataSourceManager;
+(id)fileBackedDataSourceManagerWithDirectory:(id)arg0 ;
-(id)initWithFileURLsBySection:(id)arg0 ;
-(void)_createDataSource;
-(void)insertFileURL:(id)arg0 atIndex:(NSInteger)arg1 inSection:(NSInteger)arg2 ;
-(void)removeFileURLsAtIndexes:(id)arg0 inSection:(NSInteger)arg1 ;


@end


#endif