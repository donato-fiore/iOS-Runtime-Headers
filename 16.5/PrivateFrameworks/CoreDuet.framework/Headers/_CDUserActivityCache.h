// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDUSERACTIVITYCACHE_H
#define _CDUSERACTIVITYCACHE_H

@class _PASLock;
@protocol _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting;

#import <Foundation/Foundation.h>


@interface _CDUserActivityCache : NSObject {
    id<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> *_knowledgeStore;
    _PASLock *_deletionCache;
    unsigned int _count;
}




-(BOOL)containsObjectForSourceID:(id)arg0 bundleID:(id)arg1 itemID:(id)arg2 ;
-(id)hashArrayForSourceID:(id)arg0 bundleID:(id)arg1 itemID:(id)arg2 ;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(unsigned int)count;
-(void)_populateAppActivityStream;
-(void)_populateAppLocationActivityStream;
-(void)addSourceID:(id)arg0 bundleID:(id)arg1 itemID:(id)arg2 ;
-(void)populateCache;


@end


#endif