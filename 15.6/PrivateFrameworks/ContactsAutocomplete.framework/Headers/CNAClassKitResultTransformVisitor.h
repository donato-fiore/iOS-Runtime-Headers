// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACLASSKITRESULTTRANSFORMVISITOR_H
#define CNACLASSKITRESULTTRANSFORMVISITOR_H

@class NSMutableArray, CLSDataStore;

#import <Foundation/Foundation.h>

#import "CNAutocompleteResultFactory.h"

@interface CNAClassKitResultTransformVisitor : NSObject {
    NSMutableArray *_results;
}


@property (readonly, nonatomic) CLSDataStore *dataStore; // ivar: _dataStore
@property (readonly, nonatomic) CNAutocompleteResultFactory *factory; // ivar: _factory
@property (readonly, nonatomic) NSUInteger searchType; // ivar: _searchType


+(id)addressForPerson:(id)arg0 searchType:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFactory:(id)arg0 dataStore:(id)arg1 searchType:(NSUInteger)arg2 ;
-(id)reduceCollection:(id)arg0 ;
-(void)visitClass:(id)arg0 ;
-(void)visitPerson:(id)arg0 ;


@end


#endif