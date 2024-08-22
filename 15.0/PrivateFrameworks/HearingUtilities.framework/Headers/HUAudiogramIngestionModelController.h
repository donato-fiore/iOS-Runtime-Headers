// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUAUDIOGRAMINGESTIONMODELCONTROLLER_H
#define HUAUDIOGRAMINGESTIONMODELCONTROLLER_H

@protocol HUAudiogramIngestionAssetManagerDelegate;

#import <Foundation/Foundation.h>

#import "HUAudiogramIngestionAssetManager.h"

@interface HUAudiogramIngestionModelController : NSObject <HUAudiogramIngestionAssetManagerDelegate>



@property (retain, nonatomic) HUAudiogramIngestionAssetManager *assetManager; // ivar: _assetManager


+(id)sharedController;
-(id)init;
-(id)requestAudiogramIngestionModel:(id)arg0 ;
-(void)_pushAssetURL:(id)arg0 assetProperties:(id)arg1 downloadProgress:(float)arg2 error:(id)arg3 ;
-(void)modelDidUpdate:(id)arg0 assetProperties:(id)arg1 assetVersion:(NSUInteger)arg2 withError:(id)arg3 ;
-(void)modelDownloadProgressDidUpdate:(float)arg0 ;


@end


#endif