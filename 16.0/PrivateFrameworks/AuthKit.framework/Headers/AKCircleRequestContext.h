// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCIRCLEREQUESTCONTEXT_H
#define AKCIRCLEREQUESTCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKCircleRequestPayload.h"

@interface AKCircleRequestContext : NSObject <NSSecureCoding>



@property (nonatomic) BOOL _notifyOfTimeout; // ivar: __notifyOfTimeout
@property (retain, nonatomic) NSString *heartbeatTokenValue; // ivar: _heartbeatTokenValue
@property (retain, nonatomic) NSString *identityTokenValue; // ivar: _identityTokenValue
@property (retain, nonatomic) AKCircleRequestPayload *payload; // ivar: _payload
@property (retain, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (nonatomic) BOOL waitForReply; // ivar: _waitForReply
@property (nonatomic) CGFloat waitForReplyTimeout; // ivar: _waitForReplyTimeout


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif