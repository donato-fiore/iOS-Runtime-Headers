// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPRESSGESTURESTATEINFO_H
#define SBPRESSGESTURESTATEINFO_H


#import <Foundation/Foundation.h>


@interface SBPressGestureStateInfo : NSObject

@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL isCoalescing; // ivar: _isCoalescing
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger stateUponExpiration; // ivar: _stateUponExpiration


-(id)init;


@end


#endif