// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRSPEAKERRECOGNITIONMODELCONTEXT_H
#define SSRSPEAKERRECOGNITIONMODELCONTEXT_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSRSpeakerRecognitionModelContext : NSObject

@property (readonly, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (readonly, nonatomic) NSDictionary *voiceProfilesModelFilePaths; // ivar: _voiceProfilesModelFilePaths


-(id)initWithConfigFilePath:(id)arg0 withModelFilePaths:(id)arg1 ;


@end


#endif