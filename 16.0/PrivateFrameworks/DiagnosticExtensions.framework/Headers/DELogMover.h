// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DELOGMOVER_H
#define DELOGMOVER_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface DELogMover : NSObject {
    NSObject<OS_xpc_object> *_conn;
}


@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


+(void)moveSystemLogsWithExtensions:(id)arg0 ;
-(BOOL)sendRequestReturningBooleanResponse:(id)arg0 withSuccessKey:(char *)arg1 ;
-(id)initWithServiceName:(id)arg0 ;


@end


#endif