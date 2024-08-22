// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCNODESTARTUPMANAGER_H
#define DOCNODESTARTUPMANAGER_H


#import <Foundation/Foundation.h>


@interface DOCNodeStartupManager : NSObject

@property (nonatomic) BOOL isStarted; // ivar: _isStarted


+(id)shared;
-(void)_start;
-(void)startIfNeeded;


@end


#endif