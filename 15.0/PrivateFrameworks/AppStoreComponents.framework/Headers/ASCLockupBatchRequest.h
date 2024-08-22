// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCLOCKUPBATCHREQUEST_H
#define ASCLOCKUPBATCHREQUEST_H

@class NSString, NSSet, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSSet *ids; // ivar: _ids
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSArray *requests;


+(BOOL)supportsSecureCoding;
+(id)lockupBatchRequestsFromRequests:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIDs:(id)arg0 kind:(id)arg1 context:(id)arg2 ;
-(id)lockupBatchRequestWithIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif