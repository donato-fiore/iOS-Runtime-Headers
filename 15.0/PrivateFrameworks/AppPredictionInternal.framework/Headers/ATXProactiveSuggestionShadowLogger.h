// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONSHADOWLOGGER_H
#define ATXPROACTIVESUGGESTIONSHADOWLOGGER_H

@class NSURL, NSSet, BPSPublisher;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionShadowLogger : NSObject

@property (readonly, nonatomic) NSURL *bookmarkURLPath; // ivar: _bookmarkURLPath
@property (readonly, nonatomic) NSSet *clientModelIds; // ivar: _clientModelIds
@property (retain, nonatomic) BPSPublisher *clientModelPublisher; // ivar: _clientModelPublisher
@property (retain, nonatomic) BPSPublisher *contextPublisher; // ivar: _contextPublisher
@property (retain, nonatomic) BPSPublisher *shadowEventPublisher; // ivar: _shadowEventPublisher


-(id)initWithClientModelIds:(id)arg0 shadowEventPublisher:(id)arg1 clientModelPublisher:(id)arg2 contextPublisher:(id)arg3 bookmarkURLPath:(id)arg4 ;
-(id)newBookmarkWithURLPath:(id)arg0 versionNumber:(id)arg1 bookmark:(id)arg2 metadata:(id)arg3 ;
-(id)shadowLoggingPublisher;
// -(void)enumerateShadowLoggingResultsWithBlock:(id)arg0 clientModelCacheUpdatedBlock:(unk)arg1 completionBlock:(id)arg2  ;
// -(void)enumerateShadowLoggingResultsWithBlock:(id)arg0 completionBlock:(unk)arg1  ;


@end


#endif