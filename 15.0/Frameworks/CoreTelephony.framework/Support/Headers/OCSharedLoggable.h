// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCSHAREDLOGGABLE_H
#define OCSHAREDLOGGABLE_H


#import <Foundation/Foundation.h>


@interface OCSharedLoggable : NSObject

@property (nonatomic, getter=getLogContext) OsLogContext logContext; // ivar: _logContext
@property (nonatomic, getter=getQueue) queue queue; // ivar: _queue


-(id)initWithName:(char *)arg0 qosClass:(unsigned int)arg1 logContext:(struct OsLogContext )arg2 ;
-(id)initWithQueue:(struct queue )arg0 logContext:(struct OsLogContext )arg1 ;
-(void)executeBlock:(id)arg0 ;
-(void)executeFunction:(struct function<void ()> )arg0 ;


@end


#endif