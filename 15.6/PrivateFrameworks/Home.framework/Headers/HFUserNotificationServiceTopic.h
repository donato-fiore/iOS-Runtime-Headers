// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFUSERNOTIFICATIONSERVICETOPIC_H
#define HFUSERNOTIFICATIONSERVICETOPIC_H

@class NSSet, NSString;
@protocol NAIdentifiable, HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable>



@property (readonly, copy, nonatomic) NSSet *accessoryCategoryTypes; // ivar: _accessoryCategoryTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSSet *serviceTypes; // ivar: _serviceTypes
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *topicName; // ivar: _topicName


+(id)_announceTopic;
+(id)_cameraTopic;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithServiceType:(id)arg0 topicName:(id)arg1 ;
-(id)initWithServiceTypes:(id)arg0 accessoryCategoryTypes:(id)arg1 topicName:(id)arg2 iconDescriptor:(id)arg3 ;


@end


#endif