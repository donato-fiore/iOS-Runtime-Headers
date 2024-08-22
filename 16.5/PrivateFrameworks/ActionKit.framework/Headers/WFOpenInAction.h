// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOPENINACTION_H
#define WFOPENINACTION_H

@class WFAction, NSArray;



@interface WFOpenInAction : WFAction

@property (retain, nonatomic) NSArray *contentClasses; // ivar: _contentClasses


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(BOOL)inputsMultipleItems;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)inputContentClasses;
-(id)outputContentClasses;
-(id)selectedApp;
-(void)openContentInSelectedApp:(id)arg0 ;
-(void)openContentUsingDefaultApp:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;
-(void)updateContentClasses;


@end


#endif