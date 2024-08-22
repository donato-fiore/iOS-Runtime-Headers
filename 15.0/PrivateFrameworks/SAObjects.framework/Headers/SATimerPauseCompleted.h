// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATIMERPAUSECOMPLETED_H
#define SATIMERPAUSECOMPLETED_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SATimerObject.h"

@interface SATimerPauseCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (retain, nonatomic) SATimerObject *timer;


+(id)pauseCompleted;
+(id)pauseCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif