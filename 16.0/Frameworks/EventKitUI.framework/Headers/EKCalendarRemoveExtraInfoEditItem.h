// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARREMOVEEXTRAINFOEDITITEM_H
#define EKCALENDARREMOVEEXTRAINFOEDITITEM_H



#import "EKCalendarEditItem.h"

@interface EKCalendarRemoveExtraInfoEditItem : EKCalendarEditItem



-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(id)headerTitle;
-(void)_stripAlertsChanged:(id)arg0 ;
-(void)_stripAttachmentsChanged:(id)arg0 ;


@end


#endif