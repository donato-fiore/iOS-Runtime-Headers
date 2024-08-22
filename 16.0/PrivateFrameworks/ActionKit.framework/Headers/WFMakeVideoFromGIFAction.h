// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMAKEVIDEOFROMGIFACTION_H
#define WFMAKEVIDEOFROMGIFACTION_H

@class WFAction;



@interface WFMakeVideoFromGIFAction : WFAction

@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif