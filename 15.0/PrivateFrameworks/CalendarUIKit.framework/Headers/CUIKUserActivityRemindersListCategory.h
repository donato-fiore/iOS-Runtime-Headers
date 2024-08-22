// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKUSERACTIVITYREMINDERSLISTCATEGORY_H
#define CUIKUSERACTIVITYREMINDERSLISTCATEGORY_H

@class NSString;


#import "CUIKUserActivityWithSource.h"

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {
    NSString *_title;
    NSString *_externalID;
    BOOL _predictable;
}




-(BOOL)_isMatchForRemindersList:(id)arg0 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRemindersList:(id)arg0 ;
-(id)initWithRemindersList:(id)arg0 forceLocal:(BOOL)arg1 ;
-(id)remindersListFromStore:(id)arg0 ;
-(void)updateActivity:(id)arg0 ;


@end


#endif