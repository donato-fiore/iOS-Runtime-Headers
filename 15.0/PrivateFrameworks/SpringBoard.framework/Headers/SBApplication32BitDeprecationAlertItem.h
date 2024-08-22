// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATION32BITDEPRECATIONALERTITEM_H
#define SBAPPLICATION32BITDEPRECATIONALERTITEM_H

@class SBAlertItem;


#import "SBApplication.h"

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

@property (weak, nonatomic) SBApplication *associatedDisplay; // ivar: _associatedDisplay


-(BOOL)dismissOnLock;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(id)_message;
-(id)_title;
-(id)initWithApplication:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif