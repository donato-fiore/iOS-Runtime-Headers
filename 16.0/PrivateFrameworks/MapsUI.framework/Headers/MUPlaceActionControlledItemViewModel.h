// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEACTIONCONTROLLEDITEMVIEWMODEL_H
#define MUPLACEACTIONCONTROLLEDITEMVIEWMODEL_H

@class _MKPlaceActionButtonController;


#import "MUActionRowItemViewModel.h"

@interface MUPlaceActionControlledItemViewModel : MUActionRowItemViewModel {
    _MKPlaceActionButtonController *_actionButtonController;
}




-(BOOL)isEnabled;
-(id)initWithPlaceActionController:(id)arg0 ;
-(id)symbolName;
-(id)titleText;
-(void)performWithPresentationOptions:(id)arg0 ;


@end


#endif