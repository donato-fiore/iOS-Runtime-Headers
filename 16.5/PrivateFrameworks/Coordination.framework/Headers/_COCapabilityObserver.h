// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _COCAPABILITYOBSERVER_H
#define _COCAPABILITYOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _COCapabilityObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSString *capability; // ivar: _capability
@property (readonly, copy, nonatomic) id *cluster; // ivar: _cluster
@property (nonatomic) BOOL lastValue; // ivar: _lastValue
@property (nonatomic) BOOL notified; // ivar: _notified


-(id)description;
-(id)initWithCapability:(id)arg0 cluster:(id)arg1 block:(id)arg2 ;
-(void)notify:(BOOL)arg0 ;


@end


#endif