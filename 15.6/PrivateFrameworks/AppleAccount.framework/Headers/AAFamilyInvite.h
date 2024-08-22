// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAFAMILYINVITE_H
#define AAFAMILYINVITE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface AAFamilyInvite : NSObject

@property (copy, nonatomic) NSString *childFirstName; // ivar: _childFirstName
@property (copy, nonatomic) NSString *childLastName; // ivar: _childLastName
@property (copy, nonatomic) NSString *code; // ivar: _code
@property (nonatomic) BOOL isChildTransferInvite; // ivar: _isChildTransferInvite
@property (copy, nonatomic) NSNumber *organizerDSID; // ivar: _organizerDSID
@property (copy, nonatomic) NSString *organizerEmail; // ivar: _organizerEmail
@property (copy, nonatomic) NSString *organizerFirstName; // ivar: _organizerFirstName
@property (copy, nonatomic) NSString *organizerLastName; // ivar: _organizerLastName
@property (copy, nonatomic) NSNumber *recepientDSID; // ivar: _recepientDSID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif