// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCORETELEPHONYUTILITIES_H
#define HKCORETELEPHONYUTILITIES_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKCoreTelephonyUtilities : NSObject {
    *__CTServerConnection _ctServerConnection;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ctServerQueue; // ivar: _ctServerQueue


-(BOOL)isEmergencyServicePhoneNumber:(id)arg0 ;
-(id)init;
-(struct __CTServerConnection *)ctServerConnection;
-(void)dealloc;


@end


#endif