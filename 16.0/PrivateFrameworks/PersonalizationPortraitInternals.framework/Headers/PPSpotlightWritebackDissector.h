// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSPOTLIGHTWRITEBACKDISSECTOR_H
#define PPSPOTLIGHTWRITEBACKDISSECTOR_H


#import <Foundation/Foundation.h>

#import "PPUniversalSearchSpotlightIndexScorer.h"
#import "PPLocalNamedEntityStore.h"

@interface PPSpotlightWritebackDissector : NSObject {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    BOOL _significanceCheckEnabled;
}




+(BOOL)bundleIdIsAllowed:(id)arg0 ;
+(id)sharedCache;
-(BOOL)consumeContentFromBundleId:(id)arg0 extractions:(id)arg1 spotlightIdentifier:(id)arg2 fileProtectionType:(id)arg3 shouldContinueBlock:(id)arg4 ;
-(id)init;
-(id)initWithNamedEntityStore:(id)arg0 significanceCheckEnabled:(BOOL)arg1 ;
-(void)_getNamedEntityPortraitScores:(id)arg0 priorityQueue:(id)arg1 ;


@end


#endif