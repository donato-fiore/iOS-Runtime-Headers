// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPSTORAGEBROADCASTER_H
#define TSWPSTORAGEBROADCASTER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface TSWPStorageBroadcaster : NSObject {
    NSHashTable *_observers;
    NSHashTable *_paragraphObservers;
}


@property (readonly, nonatomic) NSUInteger observerCount;
@property (readonly, nonatomic) NSUInteger paragraphObserverCount;


-(void)addObserver:(id)arg0 ;
-(void)addParagraphObserver:(id)arg0 ;
-(void)broadcastStorage:(id)arg0 didChangeParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)broadcastStorage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(NSUInteger)arg3 ;
-(void)broadcastStorage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(NSUInteger)arg3 attributeKindChanges:(id)arg4 ;
-(void)broadcastStorage:(id)arg0 didDeleteParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)broadcastStorage:(id)arg0 didInsertParagraphsInIndexRange:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;
-(void)removeParagraphObserver:(id)arg0 ;


@end


#endif