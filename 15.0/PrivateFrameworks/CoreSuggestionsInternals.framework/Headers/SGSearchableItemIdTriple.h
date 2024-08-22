// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSEARCHABLEITEMIDTRIPLE_H
#define SGSEARCHABLEITEMIDTRIPLE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SGSearchableItemIdTriple : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId


+(id)searchableItemIdTripleWithBundleId:(id)arg0 domainId:(id)arg1 uniqueId:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSearchableItemIdTriple:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBundleId:(id)arg0 domainId:(id)arg1 uniqueId:(id)arg2 ;


@end


#endif