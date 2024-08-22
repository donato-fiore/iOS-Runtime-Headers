// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLHIGHLIGHTITEMPROMOTER_H
#define PLHIGHLIGHTITEMPROMOTER_H

@protocol PLHighlightItemPromoterRule;

#import <Foundation/Foundation.h>


@interface PLHighlightItemPromoter : NSObject

@property (readonly, nonatomic) NSObject<PLHighlightItemPromoterRule> *rule; // ivar: _rule


-(id)initWithRule:(id)arg0 ;
-(void)processHighlightItemsInHighlightItemList:(id)arg0 currentlyPromotedHighlightItems:(id)arg1 withSharingConsideration:(NSInteger)arg2 resultBlock:(id)arg3 ;


@end


#endif