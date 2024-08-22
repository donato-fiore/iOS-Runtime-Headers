// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTRAITSARBITRATIONKEYBOARDINPUTS_H
#define SBFTRAITSARBITRATIONKEYBOARDINPUTS_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsArbitrationKeyboardInputs : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *keyboardOwningParticipantUniqueIdentifier; // ivar: _keyboardOwningParticipantUniqueIdentifier
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithKeyboardOwningParticipantUniqueIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif