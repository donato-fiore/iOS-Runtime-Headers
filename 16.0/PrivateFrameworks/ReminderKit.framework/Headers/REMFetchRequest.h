// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMFETCHREQUEST_H
#define REMFETCHREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_REMFetchExecutor.h"
#import "REMFetchResultToken.h"

@interface REMFetchRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) _REMFetchExecutor *fetchExecutor; // ivar: _fetchExecutor
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken; // ivar: _fetchResultToken
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countOnlyFetchRequest;
-(id)description;
-(id)fetchRequestWithFetchResultToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFetchExecutor:(id)arg0 ;
-(id)metadataFetchRequest;
-(id)objectIDsOnlyFetchRequest;
-(id)storagesAndParentFetchRequest;
-(id)storagesOnlyFetchRequest;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif