// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBBULLETINUPDATETRANSACTION_H
#define BBBULLETINUPDATETRANSACTION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBBulletinUpdate.h"

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate; // ivar: _bulletinUpdate
@property (readonly, nonatomic) NSUInteger transactionID; // ivar: _transactionID


+(BOOL)supportsSecureCoding;
+(id)transactionWithBulletinUpdate:(id)arg0 transactionID:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithBulletinUpdate:(id)arg0 transactionID:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif