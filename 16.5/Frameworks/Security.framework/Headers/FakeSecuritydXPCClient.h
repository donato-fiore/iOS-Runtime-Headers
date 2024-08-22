// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAKESECURITYDXPCCLIENT_H
#define FAKESECURITYDXPCCLIENT_H

@class NSString;
@protocol SecuritydXPCClientInterface;

#import <Foundation/Foundation.h>


@interface FakeSecuritydXPCClient : NSObject <SecuritydXPCClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)protocolWithSync:(BOOL)arg0 errorHandler:(id)arg1 ;


@end


#endif