// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISACTIVITYCONTINUATIONACTION_H
#define UISACTIVITYCONTINUATIONACTION_H

@class BSAction, NSString, NSDate, NSData;



@interface UISActivityContinuationAction : BSAction

@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *activityTypeIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) NSString *originatingDeviceName;
@property (readonly, nonatomic) NSString *originatingDeviceType;
@property (readonly, nonatomic) NSData *userActivityData;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)initWithSettings:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif