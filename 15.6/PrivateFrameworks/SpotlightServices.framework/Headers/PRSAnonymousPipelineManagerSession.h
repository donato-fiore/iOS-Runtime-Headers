// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSANONYMOUSPIPELINEMANAGERSESSION_H
#define PRSANONYMOUSPIPELINEMANAGERSESSION_H

@class PARSession;


#import "PRSAnonymousPipelineManager.h"

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

@property (retain, nonatomic) PARSession *session; // ivar: _session


+(id)sharedManager;
-(id)init;
-(void)sendCustomFeedback:(id)arg0 ;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)setPARSession:(id)arg0 ;


@end


#endif