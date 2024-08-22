// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSCREDENTIALSHARE_H
#define PKPASSCREDENTIALSHARE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassCredentialShare : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *channelTransportIdentifier; // ivar: _channelTransportIdentifier
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSInteger targetDevice; // ivar: _targetDevice


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithInvitationData:(id)arg0 ;


@end


#endif