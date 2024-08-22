// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBANNERMODEL_H
#define PKBANNERMODEL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBannerModel : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bannerModelUniqueID; // ivar: _bannerModelUniqueID
@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier; // ivar: _passUniqueIdentifier
@property (readonly, nonatomic) NSInteger transactionType; // ivar: _transactionType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPassUniqueIdenitifer:(id)arg0 transactionType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif