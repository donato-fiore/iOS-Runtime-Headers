// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMBUFFERKEYVALUEOBSERVEROBSERVANCECHANGE_H
#define CAMBUFFERKEYVALUEOBSERVEROBSERVANCECHANGE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CAMBufferObservanceChange.h"

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange

@property (readonly, copy, nonatomic) NSDictionary *change; // ivar: _change
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) NSObject *object; // ivar: _object


-(id)initWithKeyPath:(id)arg0 ofObject:(id)arg1 withChange:(id)arg2 ;


@end


#endif