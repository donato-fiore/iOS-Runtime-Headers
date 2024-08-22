// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKLISTITEMSSESSIONACTION_H
#define STKLISTITEMSSESSIONACTION_H



#import "STKTextSessionAction.h"
#import "STKListItemsSessionData.h"

@interface STKListItemsSessionAction : STKTextSessionAction

@property (readonly, nonatomic) STKListItemsSessionData *sessionData;


-(id)initWithBehavior:(id)arg0 inputData:(id)arg1 response:(id)arg2 ;
-(void)sendSuccessWithSelectedItemIndex:(NSUInteger)arg0 ;


@end


#endif