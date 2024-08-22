// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DACOREDAVAGENT_H
#define DACOREDAVAGENT_H

@class NSString, CoreDAVOptionsTask, NSTimer;
@protocol DABabysittable;


#import "DAAgent.h"

@interface DACoreDAVAgent : DAAgent <DABabysittable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CoreDAVOptionsTask *optionsProbe; // ivar: _optionsProbe
@property (retain, nonatomic) NSTimer *optionsTimeoutTimer; // ivar: _optionsTimeoutTimer
@property (readonly) Class superclass;


-(id)initWithAccount:(id)arg0 ;
-(id)waiterID;
-(void)_cancelOptionsTimer;
-(void)_probeAndSyncWithBlock:(id)arg0 ;
-(void)_serverProbeTimedOut;
-(void)dealloc;


@end


#endif