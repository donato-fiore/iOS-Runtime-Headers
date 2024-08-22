// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTSCOPEFRAME_H
#define CKCOMPONENTSCOPEFRAME_H


#import <Foundation/Foundation.h>

#import "CKComponentScopeHandle.h"

@interface CKComponentScopeFrame : NSObject {
    unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::hash<_CKStateScopeKey>, std::equal_to<_CKStateScopeKey>, std::allocator<std::pair<const _CKStateScopeKey, CKComponentScopeFrame *>>> _children;
}


@property (readonly, nonatomic) CKComponentScopeHandle *handle; // ivar: _handle


// +(struct CKComponentScopeFramePair )childPairForPair:(struct CKComponentScopeFramePair *)arg0 newRoot:(id)arg1 componentClass:(Class)arg2 identifier:(id)arg3 initialStateCreator:(id)arg4 stateUpdates:(unk)arg5  ;
-(id)initWithHandle:(id)arg0 ;


@end


#endif