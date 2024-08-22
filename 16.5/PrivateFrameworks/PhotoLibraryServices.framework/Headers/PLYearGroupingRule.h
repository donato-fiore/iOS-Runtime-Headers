// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLYEARGROUPINGRULE_H
#define PLYEARGROUPINGRULE_H

@class NSCalendar, NSString;
@protocol PLHighlightItemClustererRule;

#import <Foundation/Foundation.h>


@interface PLYearGroupingRule : NSObject <PLHighlightItemClustererRule>



@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)highlightItem:(id)arg0 belongsToHighlightItemList:(id)arg1 ;
-(BOOL)highlightItemList:(id)arg0 canBeMergedWithOtherHighlightItemList:(id)arg1 ;
-(NSUInteger)dominantYearForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(void)titlesForHighlightItemList:(id)arg0 dateRangeTitleGenerator:(id)arg1 forceUpdateLocale:(BOOL)arg2 resultBlock:(id)arg3 ;
-(void)titlesForHighlightItemList:(id)arg0 dateRangeTitleGenerator:(id)arg1 resultBlock:(id)arg2 ;


@end


#endif