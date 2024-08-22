// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRVOICEPROFILEMODELCONTEXT_H
#define SSRVOICEPROFILEMODELCONTEXT_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface SSRVoiceProfileModelContext : NSObject

@property (readonly, nonatomic) NSDictionary *compareModelFilePaths; // ivar: _compareModelFilePaths
@property (readonly, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (readonly, nonatomic) NSURL *voiceProfileModelFilePath; // ivar: _voiceProfileModelFilePath


-(id)initWithConfigFilePath:(id)arg0 withModelPath:(id)arg1 withCompareModelFilePaths:(id)arg2 ;


@end


#endif