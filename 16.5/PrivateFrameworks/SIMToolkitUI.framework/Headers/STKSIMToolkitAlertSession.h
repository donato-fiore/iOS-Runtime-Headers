// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKSIMTOOLKITALERTSESSION_H
#define STKSIMTOOLKITALERTSESSION_H



#import "STKAlertSession.h"
#import "STKSessionBehavior.h"

@interface STKSIMToolkitAlertSession : STKAlertSession

@property (readonly, nonatomic) STKSessionBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) NSInteger event; // ivar: _event


-(id)initWithLogger:(id)arg0 responseProvider:(id)arg1 event:(NSInteger)arg2 options:(id)arg3 behavior:(id)arg4 sound:(id)arg5 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withBOOLResult:(BOOL)arg1 ;
-(void)sendSuccessWithSelectedIndex:(NSUInteger)arg0 ;


@end


#endif