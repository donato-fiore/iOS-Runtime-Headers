// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTHREADINVOKER_H
#define QLTHREADINVOKER_H

@class NSURLConnection, NSData, NSError;

#import <Foundation/Foundation.h>


@interface QLThreadInvoker : NSObject {
    NSURLConnection *_connection;
    NSData *_data;
    NSError *_error;
}




-(id)initWithConnection:(id)arg0 data:(id)arg1 error:(id)arg2 ;
-(void)connectionDidFailWithError:(id)arg0 ;
-(void)connectionDidReceiveData:(id)arg0 ;
-(void)connectionDidReceiveDataLengthReceived:(id)arg0 ;


@end


#endif