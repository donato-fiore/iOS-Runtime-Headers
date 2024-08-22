// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPOCKETGETACTION_H
#define WFPOCKETGETACTION_H

@class WFAction, NSString;
@protocol PocketAPIDelegate;



@interface WFPocketGetAction : WFAction <PocketAPIDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)pocketAPI:(id)arg0 receivedResponse:(id)arg1 forAPIMethod:(id)arg2 error:(id)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif