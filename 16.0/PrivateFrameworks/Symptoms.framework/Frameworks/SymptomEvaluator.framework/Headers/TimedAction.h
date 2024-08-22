// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIMEDACTION_H
#define TIMEDACTION_H

@class NSUUID, NSDate, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TimedAction : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}


@property (readonly, nonatomic) NSUUID *connectionId; // ivar: _connectionId
@property (readonly, nonatomic) NSDate *entryTime; // ivar: _entryTime
@property (readonly, nonatomic) int interfaceIndex; // ivar: _interfaceIndex
@property (readonly, nonatomic) NSString *owner; // ivar: _owner
@property (nonatomic) NSUInteger target; // ivar: _target


-(id)description;
-(id)initWithConnId:(id)arg0 interfaceIndex:(int)arg1 owner:(id)arg2 target:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif