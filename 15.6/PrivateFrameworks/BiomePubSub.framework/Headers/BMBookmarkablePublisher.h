// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMBOOKMARKABLEPUBLISHER_H
#define BMBOOKMARKABLEPUBLISHER_H

@class NSArray, NSString;
@protocol BMBookmarkablePublisher;


#import "BPSPublisher.h"

@interface BMBookmarkablePublisher : BPSPublisher <BMBookmarkablePublisher>



@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(BOOL)canStorePassThroughValueInBookmark;
-(id)bufferWithSize:(NSUInteger)arg0 prefetch:(NSUInteger)arg1 whenFull:(NSUInteger)arg2 ;
-(id)collect;
// -(id)correlateWithCurrent:(id)arg0 comparator:(id)arg1 correlateHandler:(unk)arg2  ;
-(id)filterWithIsIncluded:(id)arg0 ;
-(id)flatMapWithTransform:(id)arg0 ;
-(id)groupByKey:(id)arg0 ;
-(id)last;
-(id)mapWithTransform:(id)arg0 ;
-(id)mergeWithOther:(id)arg0 ;
-(id)mergeWithOthers:(id)arg0 ;
-(id)multicastCreateSubject:(id)arg0 ;
-(id)multicastSubject:(id)arg0 ;
-(id)orderedMergeWithOther:(id)arg0 comparator:(id)arg1 ;
-(id)orderedMergeWithOthers:(id)arg0 comparator:(id)arg1 ;
-(id)reduce:(id)arg0 ;
-(id)reduceWithInitial:(id)arg0 nextPartialResult:(id)arg1 ;
-(id)scanWithInitial:(id)arg0 nextPartialResult:(id)arg1 ;
-(id)withBookmark:(id)arg0 ;
-(void)subscribe:(id)arg0 ;


@end


#endif