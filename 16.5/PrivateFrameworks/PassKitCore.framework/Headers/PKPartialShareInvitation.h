// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPARTIALSHAREINVITATION_H
#define PKPARTIALSHAREINVITATION_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharingMessageDisplayInformation.h"
#import "PKSecureElementPass.h"
#import "PKPassShare.h"

@interface PKPartialShareInvitation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKSharingMessageDisplayInformation *displayInformation; // ivar: _displayInformation
@property (readonly, nonatomic) NSData *homeInvite; // ivar: _homeInvite
@property (readonly, nonatomic) BOOL isHomeShare;
@property (readonly, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (retain, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (retain, nonatomic) NSString *recipientNickname; // ivar: _recipientNickname
@property (readonly, nonatomic) PKPassShare *share; // ivar: _share


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPartialShareInvitation:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeInvite:(id)arg0 displayInformation:(id)arg1 ;
-(id)initWithShare:(id)arg0 pass:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif