// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFTIMEREMAININGCONTROLLER_H
#define BFFTIMEREMAININGCONTROLLER_H

@class OBSetupAssistantProgressController, NSDateComponentsFormatter;



@interface BFFTimeRemainingController : OBSetupAssistantProgressController

@property (retain) NSDateComponentsFormatter *durationFormatter; // ivar: _durationFormatter


-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)timeRemainingString:(CGFloat)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;
-(void)setTimeRemainingEstimate:(CGFloat)arg0 ;
-(void)viewDidLoad;


@end


#endif