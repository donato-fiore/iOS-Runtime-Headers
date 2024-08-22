// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKROTATIONLOCKUTILITY_H
#define CKROTATIONLOCKUTILITY_H

@class UIWindow;

#import <Foundation/Foundation.h>


@interface CKRotationLockUtility : NSObject

@property (weak, nonatomic) UIWindow *lockedWindow; // ivar: _lockedWindow


-(id)initWithWindow:(id)arg0 ;
-(void)dealloc;
-(void)releaseRotationLock;


@end


#endif