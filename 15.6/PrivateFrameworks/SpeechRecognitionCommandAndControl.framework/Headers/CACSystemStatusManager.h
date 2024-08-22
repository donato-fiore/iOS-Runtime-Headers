// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACSYSTEMSTATUSMANAGER_H
#define CACSYSTEMSTATUSMANAGER_H


#import <Foundation/Foundation.h>


@interface CACSystemStatusManager : NSObject

@property (nonatomic) BOOL isDictationRunning; // ivar: _isDictationRunning


+(id)sharedManager;
-(BOOL)isSystemDictationRunning;
-(id)init;
-(void)_systemDictationStatusDidChange:(BOOL)arg0 ;


@end


#endif