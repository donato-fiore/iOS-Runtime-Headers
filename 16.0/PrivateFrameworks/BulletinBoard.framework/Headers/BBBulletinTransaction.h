// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBBULLETINTRANSACTION_H
#define BBBULLETINTRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BBBulletinTransaction : NSObject

@property (readonly, copy, nonatomic) NSString *bulletinID; // ivar: _bulletinID
@property (readonly, nonatomic) NSUInteger transactionID; // ivar: _transactionID


+(id)transactionWithBulletinID:(id)arg0 ;
-(NSUInteger)incrementTransactionID;
-(id)description;
-(id)initWithBulletinID:(id)arg0 ;


@end


#endif