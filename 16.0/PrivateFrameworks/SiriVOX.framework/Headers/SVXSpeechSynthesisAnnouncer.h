// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSPEECHSYNTHESISANNOUNCER_H
#define SVXSPEECHSYNTHESISANNOUNCER_H

@class NSString;
@protocol SVXSpeechSynthesisListening;


#import "SVXAnnouncer.h"

@interface SVXSpeechSynthesisAnnouncer : SVXAnnouncer <SVXSpeechSynthesisListening>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)protocol;


@end


#endif