// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTNOTESDETAILITEM_H
#define EKEVENTNOTESDETAILITEM_H



#import "EKEventTextDetailItem.h"

@interface EKEventNotesDetailItem : EKEventTextDetailItem



+(id)moreButtonLabel;
+(id)textFromEventBlock:(SEL)arg0 ;
+(id)titleForCell;
+(id)titleForExtendedViewController;
-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(id)textForCopyAction;
-(id)textForExtendedViewController;


@end


#endif