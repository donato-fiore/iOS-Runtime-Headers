// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNPUSHNOTIFICATIONTRIGGER_H
#define UNPUSHNOTIFICATIONTRIGGER_H



#import "UNNotificationTrigger.h"

@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly, nonatomic) BOOL isContentAvailable; // ivar: _isContentAvailable
@property (readonly, nonatomic) BOOL isMutableContent; // ivar: _isMutableContent


+(BOOL)supportsSecureCoding;
+(id)triggerWithContentAvailable:(BOOL)arg0 mutableContent:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithContentAvailable:(BOOL)arg0 mutableContent:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif