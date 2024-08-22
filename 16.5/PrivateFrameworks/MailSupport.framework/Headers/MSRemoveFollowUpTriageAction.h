// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSREMOVEFOLLOWUPTRIAGEACTION_H
#define MSREMOVEFOLLOWUPTRIAGEACTION_H

@class EMFollowUp;


#import "MSTriageAction.h"

@interface MSRemoveFollowUpTriageAction : MSTriageAction

@property (retain, nonatomic) EMFollowUp *followUp; // ivar: _followUp


-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 followUp:(id)arg2 ;


@end


#endif