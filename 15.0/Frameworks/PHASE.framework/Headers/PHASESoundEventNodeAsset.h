// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASESOUNDEVENTNODEASSET_H
#define PHASESOUNDEVENTNODEASSET_H

@class NSMutableDictionary;


#import "PHASEAsset.h"

@interface PHASESoundEventNodeAsset : PHASEAsset {
    unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> _actionTreeOwnedAsset;
    *void _actionTreeReference;
    unordered_map<unsigned long long, std::deque<int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::deque<int>>>> _randomHistory;
}


@property (readonly, nonatomic) NSMutableDictionary *streamNodeFormats; // ivar: _streamNodeFormats


+(id)new;
-(*void)getActionTree;
-(*void)getRandomHistory:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithUID:(id)arg0 actionTreeWeakReference:(*void)arg1 assetRegistry:(id)arg2 details:(id)arg3 ;
-(id)initWithUID:(id)arg0 assetRegistry:(id)arg1 ;
-(id)initWithUID:(id)arg0 ownedActionTree:(struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> )arg1 assetRegistry:(id)arg2 details:(id)arg3 ;


@end


#endif