// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUFLIGHTINFOVIEWCONTROLLER_H
#define FUFLIGHTINFOVIEWCONTROLLER_H

@class UIViewController;


#import "FUFlightInfoView.h"

@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView *_flight;
    NSUInteger _style;
}




-(BOOL)_canShowWhileLocked;
-(id)flightInfoView;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)loadView;
-(void)setStyle:(NSUInteger)arg0 ;


@end


#endif