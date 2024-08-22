// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTROLCENTERPRESENTATIONOBSERVATIONTOKEN_H
#define SBCONTROLCENTERPRESENTATIONOBSERVATIONTOKEN_H



#import "SBPresentationObservationToken.h"
#import "SBControlCenterController.h"

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken

@property (readonly, nonatomic) SBControlCenterController *controlCenterController; // ivar: _controlCenterController


-(NSInteger)state;
-(id)initWithControlCenterController:(id)arg0 scene:(id)arg1 ;
-(void)dealloc;


@end


#endif