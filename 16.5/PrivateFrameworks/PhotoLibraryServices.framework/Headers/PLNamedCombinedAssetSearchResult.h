// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLNAMEDCOMBINEDASSETSEARCHRESULT_H
#define PLNAMEDCOMBINEDASSETSEARCHRESULT_H

@class NSString;


#import "PLCombinedAssetSearchResult.h"

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)hasSpecialName;
-(NSUInteger)matchCount;
-(id)contentStrings;
-(id)initWithName:(id)arg0 assetSearchResults:(id)arg1 canOverlap:(BOOL)arg2 ;
-(id)matchRanges;


@end


#endif