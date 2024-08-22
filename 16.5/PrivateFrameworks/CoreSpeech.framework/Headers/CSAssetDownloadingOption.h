// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSASSETDOWNLOADINGOPTION_H
#define CSASSETDOWNLOADINGOPTION_H


#import <Foundation/Foundation.h>


@interface CSAssetDownloadingOption : NSObject

@property (nonatomic) BOOL allowAdBlockerAssetDownloading; // ivar: _allowAdBlockerAssetDownloading
@property (nonatomic) BOOL allowEndpointAssetDownloading; // ivar: _allowEndpointAssetDownloading
@property (nonatomic) BOOL allowLanguageDetectorAssetDownloading; // ivar: _allowLanguageDetectorAssetDownloading
@property (nonatomic) BOOL allowSpeakerRecognitionAssetDownloading; // ivar: _allowSpeakerRecognitionAssetDownloading
@property (nonatomic) BOOL allowVoiceTriggerAccessoryAssetDownloading; // ivar: _allowVoiceTriggerAccessoryAssetDownloading
@property (nonatomic) BOOL allowVoiceTriggerAssetDownloading; // ivar: _allowVoiceTriggerAssetDownloading


-(id)description;
-(id)init;


@end


#endif