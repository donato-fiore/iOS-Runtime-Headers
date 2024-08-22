// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFACEPROCESSINGVERSIONMANAGER_H
#define VCPFACEPROCESSINGVERSIONMANAGER_H

@class PHPhotoLibrary, NSDictionary;

#import <Foundation/Foundation.h>


@interface VCPFaceProcessingVersionManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSDictionary *_versionState;
}




+(id)resetLevelDescription:(NSInteger)arg0 ;
+(id)sharedManagerForPhotoLibrary:(id)arg0 ;
-(BOOL)_updateVersionStateFileWithError:(*id)arg0 ;
-(id)_versionStateURL;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(int)_updateCurrentProcessingVersion:(int)arg0 ;
-(int)currentProcessingVersion;
-(int)defaultProcessingVersion;
-(int)migrateFaceProcessingToVersion:(int)arg0 ;
-(int)resetAnalysisDataWithResetLevel:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif