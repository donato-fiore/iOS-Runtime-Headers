// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMPORTSOURCEDATASECTIONMANAGER_H
#define PXIMPORTSOURCEDATASECTIONMANAGER_H

@class NSString, NSArray, PHPhotoLibrary;
@protocol PXImportSourcesManagerChangeObserver;


#import "PXDataSectionManager.h"
#import "PXImportSourcesManager.h"

@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *importSources; // ivar: _importSources
@property (readonly, nonatomic) PXImportSourcesManager *importSourcesManager; // ivar: _importSourcesManager
@property (nonatomic) BOOL limitToSingleImportSource87746235; // ivar: _limitToSingleImportSource87746235
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


-(id)auxiliaryObjectForKey:(id)arg0 dataSectionObject:(id)arg1 hintIndex:(NSInteger)arg2 ;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)importSourcesManager:(id)arg0 didUpdateImportSource:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif