// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCCOLLECTIONREQUEST_H
#define ASCCOLLECTIONREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *id; // ivar: _id
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, nonatomic) NSInteger limit; // ivar: _limit


+(BOOL)supportsSecureCoding;
+(id)_requestWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 limit:(NSInteger)arg3 clientID:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_collectionRequestWithClientID:(id)arg0 ;
-(id)_initWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 limit:(NSInteger)arg3 clientID:(id)arg4 ;
-(id)collectionRequestWithClientID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 kind:(id)arg1 context:(id)arg2 limit:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif