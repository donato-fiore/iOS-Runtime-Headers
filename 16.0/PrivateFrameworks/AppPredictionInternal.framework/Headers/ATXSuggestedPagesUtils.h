// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESUTILS_H
#define ATXSUGGESTEDPAGESUTILS_H


#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesUtils : NSObject



+(NSUInteger)modeForSuggestedPageType:(NSInteger)arg0 ;
+(id)_createStackOfSize:(NSUInteger)arg0 ;
+(id)createLargeStack;
+(id)createMediumStack;
+(id)createSmallStack;
+(id)filterWidgets:(id)arg0 bySize:(NSUInteger)arg1 usedPersonalities:(id)arg2 ;
+(id)semanticTypeForSuggestedPageType:(NSInteger)arg0 ;
+(id)sortWidgetsByDescendingScore:(id)arg0 limit:(NSUInteger)arg1 ;
+(void)evenlyDistributeWidgets:(id)arg0 inRange:(struct _NSRange )arg1 amongStacks:(id)arg2 usedPersonalities:(id)arg3 maxWidgetsInStack:(NSUInteger)arg4 ;


@end


#endif