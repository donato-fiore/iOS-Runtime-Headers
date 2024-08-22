// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTTOGGLEBLOCKCALLERACTION_H
#define CNCONTACTTOGGLEBLOCKCALLERACTION_H

@class NSNumber;


#import "CNContactAction.h"

@interface CNContactToggleBlockCallerAction : CNContactAction

@property (retain, nonatomic) NSNumber *isBlockedCachedValue; // ivar: _isBlockedCachedValue


-(BOOL)isContactBlockedPreservingChanges:(BOOL)arg0 ;
-(id)allNumbersAndEmails;
-(id)checkIsContactBlocked;
-(void)performActionWithSender:(id)arg0 ;
-(void)setContactBlocked:(BOOL)arg0 ;


@end


#endif