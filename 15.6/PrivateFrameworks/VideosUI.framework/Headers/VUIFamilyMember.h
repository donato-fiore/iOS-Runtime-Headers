// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAMILYMEMBER_H
#define VUIFAMILYMEMBER_H

@class NSString, NSNumber, UIImage;
@protocol VUIFamilyMemberDelegate;

#import <Foundation/Foundation.h>


@interface VUIFamilyMember : NSObject

@property (retain, nonatomic) NSString *accountName; // ivar: _accountName
@property (weak, nonatomic) NSObject<VUIFamilyMemberDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSNumber *memberIdentifier; // ivar: _memberIdentifier
@property (retain, nonatomic) UIImage *memberImage; // ivar: _memberImage
@property (nonatomic) BOOL sharingPurchases; // ivar: _sharingPurchases


-(NSUInteger)hash;


@end


#endif