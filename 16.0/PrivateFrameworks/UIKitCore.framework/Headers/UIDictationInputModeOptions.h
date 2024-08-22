// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONINPUTMODEOPTIONS_H
#define UIDICTATIONINPUTMODEOPTIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDictationInputModeOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *invocationSource; // ivar: _invocationSource
@property (nonatomic) BOOL shouldStayInDictationInputModeIfAutoEndpointed; // ivar: _shouldStayInDictationInputModeIfAutoEndpointed
@property (nonatomic) BOOL shouldSupressShowingAlternativesAutomatically; // ivar: _shouldSupressShowingAlternativesAutomatically


+(BOOL)supportsSecureCoding;
+(id)dictationInputModeOptionsWithInvocationSource:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif