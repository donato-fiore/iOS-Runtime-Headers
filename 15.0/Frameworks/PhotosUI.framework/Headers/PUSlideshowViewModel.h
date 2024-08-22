// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWVIEWMODEL_H
#define PUSLIDESHOWVIEWMODEL_H



#import "PUViewModel.h"

@interface PUSlideshowViewModel : PUViewModel

@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (nonatomic, setter=setWantsChromeVisible:) BOOL wantsChromeVisible; // ivar: _wantsChromeVisible


-(id)currentChange;
-(id)newViewModelChange;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif