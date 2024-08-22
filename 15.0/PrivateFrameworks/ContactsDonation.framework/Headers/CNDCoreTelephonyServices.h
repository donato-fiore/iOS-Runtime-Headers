// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDCORETELEPHONYSERVICES_H
#define CNDCORETELEPHONYSERVICES_H

@class NSString;
@protocol CNDCoreTelephonyServices;

#import <Foundation/Foundation.h>


@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct __CTServerConnection *)_CTServerConnectionCreateOnTargetQueue:(struct __CFAllocator *)arg0 ;
-(void)_CTServerConnectionRegisterBlockForNotification:(struct __CTServerConnection *)arg0 ;
-(void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection *)arg0 ;


@end


#endif