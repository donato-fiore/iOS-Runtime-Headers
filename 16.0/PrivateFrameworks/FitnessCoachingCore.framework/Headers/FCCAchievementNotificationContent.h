// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCACHIEVEMENTNOTIFICATIONCONTENT_H
#define FCCACHIEVEMENTNOTIFICATIONCONTENT_H

@class ACHAchievement, NSString;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCAchievementNotificationContent : NSObject <FCCDataSerializable>



@property (readonly, nonatomic) ACHAchievement *achievement; // ivar: _achievement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAchievement:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)transportData;


@end


#endif