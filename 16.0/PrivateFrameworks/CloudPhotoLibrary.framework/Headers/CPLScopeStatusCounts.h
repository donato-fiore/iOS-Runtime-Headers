// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSCOPESTATUSCOUNTS_H
#define CPLSCOPESTATUSCOUNTS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLScopeStatusCounts : NSObject <NSSecureCoding>

 {
    BOOL _hasCachedSummaries;
}


@property (readonly, nonatomic) NSUInteger countOfSharingRecords; // ivar: _countOfSharingRecords
@property (readonly, nonatomic) NSUInteger countOfUnsharingRecords; // ivar: _countOfUnsharingRecords
@property (readonly, nonatomic) NSDictionary *countPerFlags; // ivar: _countPerFlags


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlagsCounts:(id)arg0 ;
-(void)_computeSummariesIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif