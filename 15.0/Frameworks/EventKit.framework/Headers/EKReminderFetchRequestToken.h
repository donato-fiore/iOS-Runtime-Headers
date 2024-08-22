// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKREMINDERFETCHREQUESTTOKEN_H
#define EKREMINDERFETCHREQUESTTOKEN_H

@protocol EKFetchRequestToken, NSCopying;

#import <Foundation/Foundation.h>

#import "EKReminderStore.h"

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>



@property (readonly, weak, nonatomic) EKReminderStore *reminderStore; // ivar: _reminderStore


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReminderStore:(id)arg0 ;
-(void)cancel;


@end


#endif