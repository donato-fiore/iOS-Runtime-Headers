// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTUNLOCKSERVICE_H
#define WFCOMPACTUNLOCKSERVICE_H

@class SBSLockScreenService;

#import <Foundation/Foundation.h>


@interface WFCompactUnlockService : NSObject

@property (retain, nonatomic) SBSLockScreenService *service; // ivar: _service


-(void)dealloc;
-(void)requestUnlockIfNeeded:(id)arg0 ;


@end


#endif