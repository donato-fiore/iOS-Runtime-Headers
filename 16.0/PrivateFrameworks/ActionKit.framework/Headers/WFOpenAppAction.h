// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOPENAPPACTION_H
#define WFOPENAPPACTION_H

@class WFAction, NSString;
@protocol WFStandaloneShortcutAction;



@interface WFOpenAppAction : WFAction <WFStandaloneShortcutAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(void)finishRunningWithNoAppError;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif