// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIIMMUTABLEKEYCOMMAND_H
#define _UIIMMUTABLEKEYCOMMAND_H



#import "UIKeyCommand.h"

@interface _UIImmutableKeyCommand : UIKeyCommand



-(id)_immutableCopy;
-(id)_mutableCopyIfNeeded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setEventDeferringEnvironment:(id)arg0 ;
-(void)_setMatchingPriority:(NSInteger)arg0 ;
-(void)setAllowsAutomaticLocalization:(BOOL)arg0 ;
-(void)setAllowsAutomaticMirroring:(BOOL)arg0 ;
-(void)setAttributes:(NSUInteger)arg0 ;
-(void)setDiscoverabilityTitle:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setWantsPriorityOverSystemBehavior:(BOOL)arg0 ;


@end


#endif