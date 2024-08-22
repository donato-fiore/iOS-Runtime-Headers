// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCACHEDQUERYMETADATA_H
#define HDCACHEDQUERYMETADATA_H

@class NSDate, NSString, NSDateComponents, NSNumber;

#import <Foundation/Foundation.h>


@interface HDCachedQueryMetadata : NSObject

@property (readonly, copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy, nonatomic) NSString *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, nonatomic) NSInteger generationNumber; // ivar: _generationNumber
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (readonly, nonatomic) NSInteger maxAnchor; // ivar: _maxAnchor
@property (readonly, copy, nonatomic) NSNumber *queryEndIndex; // ivar: _queryEndIndex
@property (readonly, copy, nonatomic) NSNumber *queryStartIndex; // ivar: _queryStartIndex
@property (readonly, nonatomic) NSInteger sourceEntityPersistentID; // ivar: _sourceEntityPersistentID


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCachingIdentifier:(id)arg0 sourceEntityPersistentID:(NSInteger)arg1 buildVersion:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 ;
-(id)initWithCachingIdentifier:(id)arg0 sourceEntityPersistentID:(NSInteger)arg1 maxAnchor:(NSInteger)arg2 queryStartIndex:(id)arg3 queryEndIndex:(id)arg4 generationNumber:(NSInteger)arg5 buildVersion:(id)arg6 anchorDate:(id)arg7 intervalComponents:(id)arg8 ;


@end


#endif