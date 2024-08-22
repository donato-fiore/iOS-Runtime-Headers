// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMEPODALARMITEM_H
#define HFHOMEPODALARMITEM_H

@class MTAlarm, NSString, HMMediaProfile;
@protocol NAIdentifiable, HFMediaProfileContainer;


#import "HFItem.h"

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable>



@property (copy, nonatomic) MTAlarm *alarm; // ivar: _alarm
@property (copy, nonatomic) NSString *alarmIdentifier; // ivar: _alarmIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMMediaProfile *mediaProfile;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)_effectiveLoadingStateForSuggestedLoadingState:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 alarm:(id)arg1 ;


@end


#endif