// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTCONFERENCEINFORMATIONDETAILITEM_H
#define EKEVENTCONFERENCEINFORMATIONDETAILITEM_H



#import "EKEventTextDetailItem.h"

@interface EKEventConferenceInformationDetailItem : EKEventTextDetailItem



+(id)moreButtonLabel;
+(id)textFromEventBlock:(SEL)arg0 ;
+(id)titleForCell;
+(id)titleForExtendedViewController;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(id)textForCopyAction;
-(id)textForExtendedViewController;


@end


#endif