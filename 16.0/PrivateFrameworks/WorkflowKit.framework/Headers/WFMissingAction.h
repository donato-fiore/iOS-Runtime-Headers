// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMISSINGACTION_H
#define WFMISSINGACTION_H



#import "WFAction.h"

@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization; // ivar: _isForLocalization


-(BOOL)inputPassthrough;
-(BOOL)isMissing;
-(BOOL)requiresRemoteExecution;
-(id)descriptionDictionary;
-(id)iconImage;
-(id)name;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;


@end


#endif