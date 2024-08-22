// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSUUPDATEBRAINASSETLOADER_H
#define MSUUPDATEBRAINASSETLOADER_H

@class MAAsset;


#import "MSUUpdateBrainLoader.h"

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader

@property (retain, nonatomic) MAAsset *updateAsset; // ivar: _updateAsset


-(BOOL)cancel:(*id)arg0 ;
-(BOOL)purgeUpdateBrains:(*id)arg0 ;
-(NSInteger)requiredDiskSpace:(*id)arg0 ;
-(id)initWithUpdateAsset:(id)arg0 ;
-(void)adjustMAOptions:(id)arg0 completion:(id)arg1 ;
-(void)adjustOptions:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)loadUpdateBrainWithMAOptions:(id)arg0 progressHandler:(id)arg1 ;
-(void)loadUpdateBrainWithOptions:(id)arg0 progressHandler:(id)arg1 ;


@end


#endif