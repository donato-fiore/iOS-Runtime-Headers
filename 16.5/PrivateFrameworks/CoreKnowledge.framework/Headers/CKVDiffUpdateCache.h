// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDIFFUPDATECACHE_H
#define CKVDIFFUPDATECACHE_H


#import <Foundation/Foundation.h>


@interface CKVDiffUpdateCache : NSObject {
    unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _unmodified_set;
    vector<unsigned char, std::allocator<unsigned char>> _modified_field_types;
}




-(BOOL)addModifiedItem:(id)arg0 ;
-(BOOL)addUnmodifiedItemIdHash:(id)arg0 ;
-(BOOL)hasUnmodifiedItemIdHash:(id)arg0 ;
-(NSUInteger)unmodifiedItemCount;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)modifiedFieldTypes;


@end


#endif