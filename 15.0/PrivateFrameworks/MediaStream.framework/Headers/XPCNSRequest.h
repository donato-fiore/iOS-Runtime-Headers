// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XPCNSREQUEST_H
#define XPCNSREQUEST_H

@class NSData;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "XPCRequest.h"

@interface XPCNSRequest : NSObject

@property (readonly, retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, retain, nonatomic) NSObject<NSCoding> *message; // ivar: _message
@property (readonly, retain, nonatomic) XPCRequest *request; // ivar: _request


-(id)initWithXPCRequest:(id)arg0 ;
-(void)sendReply:(id)arg0 ;


@end


#endif