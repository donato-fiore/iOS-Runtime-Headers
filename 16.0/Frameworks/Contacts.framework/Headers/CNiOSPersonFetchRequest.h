// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNIOSPERSONFETCHREQUEST_H
#define CNIOSPERSONFETCHREQUEST_H

@class NSArray, CNManagedConfiguration;
@protocol CNiOSContactPredicate;

#import <Foundation/Foundation.h>


@interface CNiOSPersonFetchRequest : NSObject

@property (readonly) NSUInteger batchSize; // ivar: _batchSize
@property (readonly) NSArray *keysToFetch; // ivar: _keysToFetch
@property (readonly) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly) NSObject<CNiOSContactPredicate> *predicate; // ivar: _predicate
@property (readonly) BOOL shouldSort; // ivar: _shouldSort
@property (readonly) unsigned int sortOrder; // ivar: _sortOrder
@property (readonly) unsigned int sortOrderIncludingNone;
@property (readonly) BOOL unifiedFetch; // ivar: _unifiedFetch


+(NSInteger)resolvedSortOrderFromContactSortOrder:(NSInteger)arg0 ;
+(id)effectivePredicate:(id)arg0 ;
+(id)fetchRequestFromCNFetchRequest:(id)arg0 managedConfiguration:(id)arg1 error:(*id)arg2 ;
+(id)validatePredicate:(id)arg0 error:(*id)arg1 ;
-(id)initWithPredicate:(id)arg0 keysToFetch:(id)arg1 shouldSort:(BOOL)arg2 sortOrder:(unsigned int)arg3 unifiedFetch:(BOOL)arg4 batchSize:(NSUInteger)arg5 managedConfiguration:(id)arg6 options:(NSUInteger)arg7 ;


@end


#endif