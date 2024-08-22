// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMAUXILIARYREMINDERCHANGEDELETEINFO_H
#define REMAUXILIARYREMINDERCHANGEDELETEINFO_H

@class NSString;
@protocol REMAuxiliaryReminderChangeInfo;


#import "REMAuxiliaryChangeInfoType.h"

@interface REMAuxiliaryReminderChangeDeleteInfo : REMAuxiliaryChangeInfoType <REMAuxiliaryReminderChangeInfo>



@property (readonly, nonatomic) NSString *oldExternalIdentifier;
@property (readonly, nonatomic) NSString *oldListIdentifier;
@property (readonly, nonatomic) NSString *reminderIdentifier;


+(id)cdEntityName;


@end


#endif