// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSCONFIGURATION_H
#define PDSCONFIGURATION_H

@class NSURL, NSString;
@protocol NSCopying, OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface PDSConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *daemonRootDirectory; // ivar: _daemonRootDirectory
@property (retain, nonatomic) NSString *pushHandlerPort; // ivar: _pushHandlerPort
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif