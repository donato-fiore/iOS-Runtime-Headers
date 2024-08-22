// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNGEMINICHANNEL_H
#define CNGEMINICHANNEL_H

@class NSString, TUSenderIdentity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNGeminiChannel : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *localizedBadgeLabel; // ivar: _localizedBadgeLabel
@property (readonly, nonatomic) NSString *localizedLabel; // ivar: _localizedLabel
@property (readonly, nonatomic) TUSenderIdentity *senderIdentity; // ivar: _senderIdentity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif