// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREPENDINGACTIVATION_H
#define PKPASSSHAREPENDINGACTIVATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharingMessage.h"

@interface PKPassSharePendingActivation : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isWaitingOnUserAction; // ivar: _isWaitingOnUserAction
@property (retain, nonatomic) PKSharingMessage *originalInvitation; // ivar: _originalInvitation
@property (retain, nonatomic) NSString *shareIdentifier; // ivar: _shareIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassSharePendingActivation:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif