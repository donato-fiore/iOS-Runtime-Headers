// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBBACKFORWARDLIST_H
#define WEBBACKFORWARDLIST_H

@class WebBackForwardListPrivate;

#import <Foundation/Foundation.h>

#import "WebHistoryItem.h"

@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate *_private;
}


@property (readonly, nonatomic) WebHistoryItem *backItem;
@property (readonly, nonatomic) int backListCount;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) WebHistoryItem *currentItem;
@property (readonly, nonatomic) WebHistoryItem *forwardItem;
@property (readonly, nonatomic) int forwardListCount;


+(void)initialize;
-(BOOL)containsItem:(id)arg0 ;
-(NSUInteger)pageCacheSize;
-(id)backListWithLimit:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)forwardListWithLimit:(int)arg0 ;
-(id)init;
-(id)initWithBackForwardList:(*void)arg0 ;
-(id)itemAtIndex:(int)arg0 ;
-(void)_close;
-(void)addItem:(id)arg0 ;
-(void)dealloc;
-(void)goBack;
-(void)goForward;
-(void)goToItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)setPageCacheSize:(NSUInteger)arg0 ;
-(void)setToMatchDictionaryRepresentation:(id)arg0 ;


@end


#endif