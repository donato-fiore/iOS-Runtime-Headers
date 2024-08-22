// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESDEFAULTS_H
#define SBSYSTEMNOTESDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBSystemNotesDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isFingerSwipeToSystemNotesEnabled) BOOL fingerSwipeToSystemNotesEnabled;
@property (nonatomic, getter=isPencilSwipeToSystemNotesEnabled) BOOL pencilSwipeToSystemNotesEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif