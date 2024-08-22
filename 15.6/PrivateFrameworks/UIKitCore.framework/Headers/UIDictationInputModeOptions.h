// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONINPUTMODEOPTIONS_H
#define UIDICTATIONINPUTMODEOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIDictationInputModeOptions : NSObject

@property (copy, nonatomic) NSString *invocationSource; // ivar: _invocationSource
@property (nonatomic) BOOL shouldStayInDictationInputModeIfAutoEndpointed; // ivar: _shouldStayInDictationInputModeIfAutoEndpointed
@property (nonatomic) BOOL shouldSupressShowingAlternativesAutomatically; // ivar: _shouldSupressShowingAlternativesAutomatically


+(id)dictationInputModeOptionsWithInvocationSource:(id)arg0 ;


@end


#endif