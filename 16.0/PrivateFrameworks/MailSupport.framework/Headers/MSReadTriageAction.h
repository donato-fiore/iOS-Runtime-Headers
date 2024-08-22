// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSREADTRIAGEACTION_H
#define MSREADTRIAGEACTION_H



#import "MSFlagChangeTriageAction.h"

@interface MSReadTriageAction : MSFlagChangeTriageAction



-(BOOL)flagState;
-(id)messageFlags;
-(void)_toggleFlagWithBuilder:(id)arg0 ;


@end


#endif