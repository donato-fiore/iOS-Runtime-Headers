// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEPROCESSINGSETTINGS_H
#define BWSTILLIMAGEPROCESSINGSETTINGS_H


#import <Foundation/Foundation.h>

#import "BWPhotoManifest.h"

@interface BWStillImageProcessingSettings : NSObject

@property (readonly, nonatomic) BWPhotoManifest *photoManifest; // ivar: _photoManifest
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection; // ivar: _processIntelligentDistortionCorrection
@property (readonly, nonatomic) BOOL provideDemosaicedRaw; // ivar: _provideDemosaicedRaw


-(id)initWithPhotoManifest:(id)arg0 processIntelligentDistortionCorrection:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif