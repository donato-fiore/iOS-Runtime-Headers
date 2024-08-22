// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCAPTIONTASKINFO_H
#define VCCAPTIONTASKINFO_H

@class SFSpeechRecognitionTask;

#import <Foundation/Foundation.h>


@interface VCCaptionTaskInfo : NSObject

@property SFSpeechRecognitionTask *task; // ivar: _task
@property NSInteger token; // ivar: _token
@property unsigned int updateNumber; // ivar: _updateNumber
@property unsigned int utteranceNumber; // ivar: _utteranceNumber


-(id)initWithTask:(id)arg0 token:(NSInteger)arg1 utteranceNumber:(unsigned int)arg2 ;


@end


#endif