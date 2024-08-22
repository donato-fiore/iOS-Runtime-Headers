// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTMESSAGEEVENT_H
#define AMSENGAGEMENTMESSAGEEVENT_H

@class NSDictionary, NSString, NSArray;
@protocol AMSEngagementEvent;

#import <Foundation/Foundation.h>


@interface AMSEngagementMessageEvent : NSObject <AMSEngagementEvent>



@property (retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *engagementData;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *placementInfo; // ivar: _placementInfo
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


-(id)initWithServiceType:(id)arg0 placementInfo:(id)arg1 ;
-(id)initWithServiceType:(id)arg0 placements:(id)arg1 ;


@end


#endif