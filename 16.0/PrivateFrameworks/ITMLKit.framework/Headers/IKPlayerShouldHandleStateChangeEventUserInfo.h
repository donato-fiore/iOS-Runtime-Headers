// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKPLAYERSHOULDHANDLESTATECHANGEEVENTUSERINFO_H
#define IKPLAYERSHOULDHANDLESTATECHANGEEVENTUSERINFO_H



#import "IKPlayerStateChangeEventUserInfo.h"

@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo

@property (readonly, nonatomic) CGFloat proposedTime; // ivar: _proposedTime
@property (readonly, nonatomic) CGFloat requestedTime; // ivar: _requestedTime
@property (readonly, nonatomic) BOOL shouldHandle; // ivar: _shouldHandle


-(id)initWithState:(NSInteger)arg0 ;
-(id)initWithState:(NSInteger)arg0 oldState:(NSInteger)arg1 ;
-(id)initWithState:(NSInteger)arg0 oldState:(NSInteger)arg1 requestedTime:(CGFloat)arg2 ;
-(id)initWithState:(NSInteger)arg0 requestedTime:(CGFloat)arg1 ;
-(void)processReturnJSValue:(id)arg0 inContext:(id)arg1 ;


@end


#endif