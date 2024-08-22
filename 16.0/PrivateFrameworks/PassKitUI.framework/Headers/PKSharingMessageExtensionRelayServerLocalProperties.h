// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGMESSAGEEXTENSIONRELAYSERVERLOCALPROPERTIES_H
#define PKSHARINGMESSAGEEXTENSIONRELAYSERVERLOCALPROPERTIES_H

@class NSData, PKPartialShareInvitation, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSharingMessageExtensionRelayServerLocalProperties : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *analyticsSessionToken; // ivar: _analyticsSessionToken
@property (nonatomic) BOOL hasCheckedStatus; // ivar: _hasCheckedStatus
@property (retain, nonatomic) PKPartialShareInvitation *partialInvite; // ivar: _partialInvite
@property (retain, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharingMessageExtensionRelayServerLocalProperties:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif