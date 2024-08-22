// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDCACHEDSOURCEORDER_H
#define _HDCACHEDSOURCEORDER_H


#import <Foundation/Foundation.h>


@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> _orderedSources;
    unordered_map<long long, HKSource *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, HKSource *>>> _sourcesByID;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif