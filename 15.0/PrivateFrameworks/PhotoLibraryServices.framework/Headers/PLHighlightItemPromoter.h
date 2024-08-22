// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLHIGHLIGHTITEMPROMOTER_H
#define PLHIGHLIGHTITEMPROMOTER_H

@protocol PLHighlightItemPromoterRule;

#import <Foundation/Foundation.h>


@interface PLHighlightItemPromoter : NSObject

@property (readonly, nonatomic) NSObject<PLHighlightItemPromoterRule> *rule; // ivar: _rule


-(id)initWithRule:(id)arg0 ;
-(void)processHighlightItemsInHighlightItemList:(id)arg0 resultBlock:(id)arg1 ;


@end


#endif