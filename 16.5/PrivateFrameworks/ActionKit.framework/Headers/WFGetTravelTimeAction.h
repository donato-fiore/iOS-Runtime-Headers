// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGETTRAVELTIMEACTION_H
#define WFGETTRAVELTIMEACTION_H

@class WFAction;



@interface WFGetTravelTimeAction : WFAction



+(NSUInteger)transportTypeFromString:(id)arg0 ;
-(BOOL)isStartOrDestinationCurrentLocation;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)outputContentClasses;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)getMapItemFromCollection:(id)arg0 parameterKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif