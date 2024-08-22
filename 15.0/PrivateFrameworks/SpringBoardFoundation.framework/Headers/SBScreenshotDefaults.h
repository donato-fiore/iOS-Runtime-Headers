// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCREENSHOTDEFAULTS_H
#define SBSCREENSHOTDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBScreenshotDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isSwipeToScreenshotEnabled) BOOL swipeToScreenshotEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif