// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACCONTEXTCLUESWELCOMECONTROLLER_H
#define CACCONTEXTCLUESWELCOMECONTROLLER_H

@class OBTextWelcomeController;
@protocol CACContextCluesWelcomeControllerDelegate;



@interface CACContextCluesWelcomeController : OBTextWelcomeController

@property (weak, nonatomic) NSObject<CACContextCluesWelcomeControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;


@end


#endif