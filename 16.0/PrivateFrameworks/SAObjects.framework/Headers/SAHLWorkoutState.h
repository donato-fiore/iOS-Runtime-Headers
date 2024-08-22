// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAHLWORKOUTSTATE_H
#define SAHLWORKOUTSTATE_H

@class NSString;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAHLWorkoutState : AceObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workoutStateValue;


+(id)workoutState;
+(id)workoutStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif