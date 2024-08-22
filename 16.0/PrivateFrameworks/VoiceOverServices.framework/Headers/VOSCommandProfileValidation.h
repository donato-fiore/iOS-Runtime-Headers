// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOSCOMMANDPROFILEVALIDATION_H
#define VOSCOMMANDPROFILEVALIDATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VOSCommand.h"

@interface VOSCommandProfileValidation : NSObject {
    NSInteger _validationType;
}


@property (readonly, nonatomic) BOOL isGestureAlreadyAssignedToCommand;
@property (readonly, nonatomic) BOOL isGestureAssignedToOtherCommand;
@property (readonly, nonatomic) BOOL isKeyboardShortcutAlreadyAssignedToCommand;
@property (readonly, nonatomic) BOOL isKeyboardShortcutAssignedToOtherCommand;
@property (readonly, nonatomic) BOOL isSuccessful;
@property (readonly, nonatomic) NSString *localizedErrorMessage;
@property (readonly, nonatomic) NSString *localizedErrorTitle;
@property (retain, nonatomic) VOSCommand *previouslyBoundCommand; // ivar: _previouslyBoundCommand


+(id)gestureAssignedToOtherCommandValidation:(id)arg0 ;
+(id)keyboardShortcutAssignedToOtherCommandValidation:(id)arg0 ;
+(id)successfulValidation;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif