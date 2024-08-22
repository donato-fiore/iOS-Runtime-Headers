// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECURITYDXPCCALLBACK_H
#define SECURITYDXPCCALLBACK_H

@class NSString;
@protocol SecuritydXPCCallbackProtocol;

#import <Foundation/Foundation.h>


@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol>



@property (copy) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallback:(id)arg0 ;
-(void)callCallback:(BOOL)arg0 error:(id)arg1 ;


@end


#endif