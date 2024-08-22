// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMBUFFERKEYVALUEOBSERVEROBSERVANCE_H
#define CAMBUFFERKEYVALUEOBSERVEROBSERVANCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CAMBufferObservance.h"

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance

@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) NSObject *object; // ivar: _object


-(BOOL)shouldBeFulfilledByChange:(id)arg0 ;
// -(id)initWithKeyPath:(id)arg0 ofObject:(id)arg1 withPredicate:(id)arg2 removedOnceEnabled:(unk)arg3  ;
-(void)setupObservanceForBuffer:(id)arg0 ;
-(void)teardownObservanceForBuffer:(id)arg0 ;


@end


#endif