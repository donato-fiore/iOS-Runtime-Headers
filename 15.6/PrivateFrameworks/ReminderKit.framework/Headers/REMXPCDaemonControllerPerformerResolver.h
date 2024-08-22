// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMXPCDAEMONCONTROLLERPERFORMERRESOLVER_H
#define REMXPCDAEMONCONTROLLERPERFORMERRESOLVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface REMXPCDaemonControllerPerformerResolver : NSObject

@property (readonly, nonatomic) NSString *name;


-(void)resolveWithDaemon:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;


@end


#endif