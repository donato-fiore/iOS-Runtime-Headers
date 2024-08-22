// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUERYSERVERCLIENTSTATE_H
#define HDQUERYSERVERCLIENTSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDQueryServerClientState : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int applicationState; // ivar: _applicationState
@property (readonly, nonatomic, getter=isBackgroundRunning) BOOL backgroundRunning;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithApplicationState:(unsigned int)arg0 ;


@end


#endif