// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKCOMPONENTMEMOIZERIMPL_H
#define _CKCOMPONENTMEMOIZERIMPL_H


#import <Foundation/Foundation.h>

#import "_CKComponentMemoizerImpl.h"

@interface _CKComponentMemoizerImpl : NSObject {
    _CKComponentMemoizerImpl *_next;
    unordered_multimap<CKMemoizationKey, CKComponent *, std::hash<CKMemoizationKey>, std::equal_to<CKMemoizationKey>, std::allocator<std::pair<const CKMemoizationKey, CKComponent *>>> componentCache_;
    unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::allocator<std::pair<const CKLayoutMemoizationKey, CKComponentLayout>>> layoutCache_;
}




+(id)currentMemoizer;
+(void)setCurrentMemoizer:(id)arg0 ;
-(id)dequeueComponentForKey:(struct CKMemoizationKey )arg0 ;
-(id)next;
-(struct CKComponentLayout )cachedLayout:(id)arg0 thatFits:(struct CKSizeRange )arg1 restrictedToSize:(struct CKComponentSize )arg2 parentSize:(struct CGSize )arg3 block:(id)arg4 ;
-(void)enqueueComponent:(id)arg0 forKey:(struct CKMemoizationKey )arg1 ;


@end


#endif