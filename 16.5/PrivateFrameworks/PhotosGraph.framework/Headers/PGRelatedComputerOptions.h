// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGRELATEDCOMPUTEROPTIONS_H
#define PGRELATEDCOMPUTEROPTIONS_H

@class NSSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGRelatedComputerOptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (copy, nonatomic) NSSet *filteringLocalIdentifiers; // ivar: _filteringLocalIdentifiers
@property (copy, nonatomic) NSString *referenceAssetIdentifier; // ivar: _referenceAssetIdentifier
@property (nonatomic) BOOL shouldIncludeContainingEventKey; // ivar: _shouldIncludeContainingEventKey
@property (nonatomic) BOOL useDiversity; // ivar: _useDiversity


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;


@end


#endif