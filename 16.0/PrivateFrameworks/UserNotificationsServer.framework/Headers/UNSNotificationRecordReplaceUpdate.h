// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSNOTIFICATIONRECORDREPLACEUPDATE_H
#define UNSNOTIFICATIONRECORDREPLACEUPDATE_H



#import "UNSNotificationRecordUpdate.h"
#import "UNSNotificationRecord.h"

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord; // ivar: _replacedNotificationRecord
@property (readonly, nonatomic) BOOL shouldRepost; // ivar: _shouldRepost


+(id)updateWithNotificationRecord:(id)arg0 replacedNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithNotificationRecord:(id)arg0 replacedNotificationRecord:(id)arg1 shouldRepost:(BOOL)arg2 ;


@end


#endif