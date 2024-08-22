// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRITASK_H
#define AFSIRITASK_H

@class NSXPCListenerEndpoint, NSString;
@protocol NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "AFSiriRequest.h"

@interface AFSiriTask : NSObject <NSSecureCoding, BSXPCCoding>

 {
    AFSiriRequest *_request;
    NSXPCListenerEndpoint *_remoteResponseListenerEndpoint;
    NSXPCListenerEndpoint *_usageResultListenerEndpoint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)_initWithRequest:(id)arg0 remoteResponseListenerEndpoint:(id)arg1 usageResultListenerEndpoint:(id)arg2 ;
-(id)_responseHandlerConnection;
-(id)_usageResultHandlerConnection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)request;
-(void)_invalidateConnectionAfterMessageSent:(id)arg0 ;
-(void)completeWithResponse:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)reportUsageResult:(id)arg0 ;


@end


#endif