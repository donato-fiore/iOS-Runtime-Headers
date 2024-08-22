// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADAMCONTAINERIDCACHEKEY_H
#define DADAMCONTAINERIDCACHEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DADAMContainerIDCacheKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSInteger dataclass; // ivar: _dataclass


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccountID:(id)arg0 andDataclass:(NSInteger)arg1 ;


@end


#endif