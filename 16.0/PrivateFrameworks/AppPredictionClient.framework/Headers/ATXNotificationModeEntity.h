// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONMODEENTITY_H
#define ATXNOTIFICATIONMODEENTITY_H

@class NSString;
@protocol ATXModeEntityProtocol;

#import <Foundation/Foundation.h>

#import "ATXAppModeEntity.h"
#import "ATXContactModeEntity.h"
#import "ATXModeEntityScore.h"

@interface ATXNotificationModeEntity : NSObject <ATXModeEntityProtocol>



@property (retain, nonatomic) ATXAppModeEntity *appEntity; // ivar: _appEntity
@property (retain, nonatomic) ATXContactModeEntity *contactEntity; // ivar: _contactEntity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat receiveTimestamp; // ivar: _receiveTimestamp
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata; // ivar: scoreMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)contactEntityFromUserNotification:(id)arg0 ;
-(id)contactIdFromUserNotification:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)initWithAppEntity:(id)arg0 ;
-(id)initWithAppEntity:(id)arg0 contactEntity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactEntity:(id)arg0 ;
-(id)initWithUNNotification:(id)arg0 ;
-(id)initWithUserNotification:(id)arg0 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif