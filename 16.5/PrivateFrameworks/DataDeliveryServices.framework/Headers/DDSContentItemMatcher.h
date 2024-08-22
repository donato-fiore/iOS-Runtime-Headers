// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSCONTENTITEMMATCHER_H
#define DDSCONTENTITEMMATCHER_H


#import <Foundation/Foundation.h>


@interface DDSContentItemMatcher : NSObject



+(BOOL)_anyDictionaryIn:(id)arg0 matches:(id)arg1 shouldLenientlyMatch:(id)arg2 ;
+(BOOL)_anyStringIn:(id)arg0 matches:(id)arg1 acceptUnspecifiedValue:(BOOL)arg2 ;
+(BOOL)_dictionary:(id)arg0 matches:(id)arg1 acceptUnspecifiedAttribute:(BOOL)arg2 lenientMatch:(BOOL)arg3 ;
+(BOOL)_string:(id)arg0 matches:(id)arg1 acceptUnspecifiedValue:(BOOL)arg2 ;
+(BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg0 ;
+(id)assetContentItemsMatching:(id)arg0 contentItems:(id)arg1 parentAsset:(id)arg2 ;


@end


#endif