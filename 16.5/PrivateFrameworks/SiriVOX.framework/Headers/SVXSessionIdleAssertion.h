// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSESSIONIDLEASSERTION_H
#define SVXSESSIONIDLEASSERTION_H


#import <Foundation/Foundation.h>

#import "SVXSession.h"

@interface SVXSessionIdleAssertion : NSObject

@property (readonly, nonatomic) SVXSession *session; // ivar: _session
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithTimestamp:(NSUInteger)arg0 session:(id)arg1 ;


@end


#endif