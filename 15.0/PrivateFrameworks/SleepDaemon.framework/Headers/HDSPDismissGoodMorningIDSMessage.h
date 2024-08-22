// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPDISMISSGOODMORNINGIDSMESSAGE_H
#define HDSPDISMISSGOODMORNINGIDSMESSAGE_H

@class NSDate;


#import "HDSPEventRecordMessage.h"

@interface HDSPDismissGoodMorningIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *goodMorningDismissed;


-(id)dateDescription;
-(id)initWithGoodMorningDismissedDate:(id)arg0 ;


@end


#endif