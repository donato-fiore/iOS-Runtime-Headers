// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTARRATINGALERTCONTROLLER_H
#define SKSTARRATINGALERTCONTROLLER_H

@class UIAlertController, UIAlertAction;


#import "SKStarRatingControl.h"

@interface SKStarRatingAlertController : UIAlertController {
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) float rating;


+(id)starRatingAlertController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_ratingControlChanged:(id)arg0 ;
-(void)_updateButtonState;
-(void)dealloc;
-(void)setupActionsWithBundle:(id)arg0 ;


@end


#endif