// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOTIFICATIONMESSAGE_H
#define MRNOTIFICATIONMESSAGE_H

@class NSString, NSDictionary;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRNotificationMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSDictionary *userInfo;


-(NSUInteger)type;
-(id)initWithNotification:(id)arg0 ;


@end


#endif