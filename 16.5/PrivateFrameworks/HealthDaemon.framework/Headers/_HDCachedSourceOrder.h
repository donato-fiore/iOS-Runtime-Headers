// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDCACHEDSOURCEORDER_H
#define _HDCACHEDSOURCEORDER_H


#import <Foundation/Foundation.h>


@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> _orderedSources;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif