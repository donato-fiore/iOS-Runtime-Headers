// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSYNTHESISENGINERESOURCE_H
#define SIRITTSSYNTHESISENGINERESOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSSynthesisEngineResource : NSObject

@property shared_ptr<SiriTTS::VoiceResource> handle; // ivar: _handle
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSString *path; // ivar: _path




@end


#endif