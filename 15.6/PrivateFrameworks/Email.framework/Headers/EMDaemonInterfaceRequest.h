// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMDAEMONINTERFACEREQUEST_H
#define EMDAEMONINTERFACEREQUEST_H

@class NSString;
@protocol EFSignpostable;

#import <Foundation/Foundation.h>


@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;


+(NSUInteger)uniqueRequestID;
+(id)signpostLog;
+(id)systemScopeSignpostLog;


@end


#endif