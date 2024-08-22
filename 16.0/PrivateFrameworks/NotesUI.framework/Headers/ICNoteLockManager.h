// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTELOCKMANAGER_H
#define ICNOTELOCKMANAGER_H

@class ICAccount, ICNote, UIWindow;

#import <Foundation/Foundation.h>


@interface ICNoteLockManager : NSObject

@property (readonly, nonatomic) ICAccount *account; // ivar: _account
@property (readonly, nonatomic) NSUInteger cannotLockReason;
@property (readonly, nonatomic) ICNote *note; // ivar: _note
@property (retain, nonatomic) ICNote *updatedNote; // ivar: _updatedNote
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


-(id)initWithNote:(id)arg0 window:(id)arg1 ;
-(void)addLockWithCompletionHandler:(id)arg0 ;
-(void)removeLockWithCompletionHandler:(id)arg0 ;
-(void)toggleLockWithCompletionHandler:(id)arg0 ;
-(void)unsafelyToggleLock;


@end


#endif