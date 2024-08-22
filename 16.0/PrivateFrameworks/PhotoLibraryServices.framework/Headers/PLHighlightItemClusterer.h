// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLHIGHLIGHTITEMCLUSTERER_H
#define PLHIGHLIGHTITEMCLUSTERER_H

@protocol PLHighlightItemClustererRule;

#import <Foundation/Foundation.h>


@interface PLHighlightItemClusterer : NSObject

@property (readonly, nonatomic) NSObject<PLHighlightItemClustererRule> *rule; // ivar: _rule


-(id)initWithRule:(id)arg0 ;
-(id)processHighlightItems:(id)arg0 withRestoredHighlightItemLists:(id)arg1 progressBlock:(id)arg2 ;
// -(void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg0 deletedHighlightItems:(id)arg1 usingModelReader:(id)arg2 progressBlock:(id)arg3 restoreBlock:(unk)arg4  ;


@end


#endif