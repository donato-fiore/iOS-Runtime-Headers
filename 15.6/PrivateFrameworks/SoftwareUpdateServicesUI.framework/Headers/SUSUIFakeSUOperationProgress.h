// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSUIFAKESUOPERATIONPROGRESS_H
#define SUSUIFAKESUOPERATIONPROGRESS_H

@class SUOperationProgress;



@interface SUSUIFakeSUOperationProgress : SUOperationProgress



-(BOOL)isDone;
-(CGFloat)timeRemaining;
-(float)normalizedPercentComplete;
-(float)percentComplete;
-(id)phase;


@end


#endif