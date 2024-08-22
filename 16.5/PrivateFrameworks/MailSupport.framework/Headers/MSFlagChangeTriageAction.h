// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSFLAGCHANGETRIAGEACTION_H
#define MSFLAGCHANGETRIAGEACTION_H

@class ECMessageFlags;
@protocol MSFlagChangeTriageActionDelegate;


#import "MSTriageAction.h"

@interface MSFlagChangeTriageAction : MSTriageAction

@property (readonly, weak, nonatomic) NSObject<MSFlagChangeTriageActionDelegate> *delegate;
@property (readonly, nonatomic) BOOL flagState;
@property (readonly, nonatomic) ECMessageFlags *messageFlags;
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason


-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 reason:(NSInteger)arg2 ;
-(void)_toggleFlagWithBuilder:(id)arg0 ;


@end


#endif