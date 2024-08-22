// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETEPROBEKEYBUILDER_H
#define CNAUTOCOMPLETEPROBEKEYBUILDER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNAutocompleteProbeKeyBuilder : NSObject

@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSArray *prefixes; // ivar: _prefixes
@property (retain, nonatomic) NSArray *suffixes; // ivar: _suffixes


+(id)builderWithKey:(id)arg0 ;
-(id)addBatchIndex:(NSUInteger)arg0 ;
-(id)addDuetModelID;
-(id)addDuetReturnedResults:(BOOL)arg0 ;
-(id)build;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(id)prediction;
-(id)prefixedSearch;
-(void)useString:(id)arg0 forSuffixAtIndex:(NSUInteger)arg1 ;


@end


#endif