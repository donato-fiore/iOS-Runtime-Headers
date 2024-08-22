// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGETDISTANCEACTION_H
#define WFGETDISTANCEACTION_H

@class WFAction;



@interface WFGetDistanceAction : WFAction



+(NSUInteger)transportTypeFromString:(id)arg0 ;
-(BOOL)destinationIsCurrentLocation;
-(BOOL)locationParameterIsCurrentLocation:(id)arg0 ;
-(BOOL)originIsCurrentLocation;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)noLocationError;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)finishRunningWithDistance:(CGFloat)arg0 ;
-(void)getDirectDistanceFromOrigin:(id)arg0 toDestination:(id)arg1 ;
-(void)getDistanceFromOrigin:(id)arg0 toDestination:(id)arg1 transportType:(NSUInteger)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif