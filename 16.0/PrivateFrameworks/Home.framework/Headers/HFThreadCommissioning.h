// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTHREADCOMMISSIONING_H
#define HFTHREADCOMMISSIONING_H

@class HMHome, NSString, NSNumber;
@protocol HMFCancellable;

#import <Foundation/Foundation.h>


@interface HFThreadCommissioning : NSObject

@property (retain, nonatomic) NSObject<HMFCancellable> *cancellationToken; // ivar: _cancellationToken
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSString *setupCode; // ivar: _setupCode
@property (readonly, nonatomic) NSNumber *threadIdentifier; // ivar: _threadIdentifier


-(id)initWithSetupCode:(id)arg0 threadIdentifier:(id)arg1 home:(id)arg2 ;
-(id)start;


@end


#endif