// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBPROCESSSTATE_H
#define FBPROCESSSTATE_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDebugging) BOOL debugging; // ivar: _debugging
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground; // ivar: _foreground
@property (readonly) NSUInteger hash;
@property (nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly) Class superclass;
@property (nonatomic) NSInteger taskState; // ivar: _taskState
@property (nonatomic) NSInteger visibility; // ivar: _visibility


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithPid:(int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif