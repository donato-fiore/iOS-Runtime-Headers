// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSPOTLIGHTWRITEBACKDISSECTOR_H
#define SGSPOTLIGHTWRITEBACKDISSECTOR_H

@class PPUniversalSearchSpotlightIndexScorer, PPLocalNamedEntityStore, NSCache, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGSpotlightWritebackDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    NSCache *_namedEntityScoreCache;
    BOOL _significanceCheckEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)bundleIdIsAllowed:(id)arg0 ;
-(id)init;
-(id)initWithNamedEntityStore:(id)arg0 significanceCheckEnabled:(BOOL)arg1 ;
-(void)_getNamedEntityPortraitScores:(id)arg0 priorityQueue:(id)arg1 ;
-(void)dissect:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif