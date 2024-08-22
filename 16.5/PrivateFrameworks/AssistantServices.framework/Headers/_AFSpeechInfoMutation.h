// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSPEECHINFOMUTATION_H
#define _AFSPEECHINFOMUTATION_H

@class SASSpeechRecognized, NSString;
@protocol AFSpeechInfoMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechInfo.h"

@interface _AFSpeechInfoMutation : NSObject <AFSpeechInfoMutating>

 {
    AFSpeechInfo *_base;
    SASSpeechRecognized *_speechRecognizedCommand;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getSpeechRecognizedCommand;
-(id)initWithBase:(id)arg0 ;
-(void)setSpeechRecognizedCommand:(id)arg0 ;


@end


#endif