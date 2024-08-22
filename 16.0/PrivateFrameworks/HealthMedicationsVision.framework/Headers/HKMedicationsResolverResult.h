// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSRESOLVERRESULT_H
#define HKMEDICATIONSRESOLVERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKMedicationsResolverResult : NSObject

@property (nonatomic) BOOL looksGeneric; // ivar: _looksGeneric
@property (copy, nonatomic) NSArray *ngramList; // ivar: _ngramList
@property (nonatomic) NSInteger numberOfNewNgrams; // ivar: _numberOfNewNgrams
@property (nonatomic) NSInteger numberOfUsedNgrams; // ivar: _numberOfUsedNgrams
@property (copy, nonatomic) NSArray *resolvedIds; // ivar: _resolvedIds
@property (copy, nonatomic) NSArray *usedNgrams; // ivar: _usedNgrams


-(id)description;


@end


#endif