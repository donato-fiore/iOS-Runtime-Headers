// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDAMSENGAGEMENTEVENT_H
#define AMDAMSENGAGEMENTEVENT_H

@class NSDictionary, NSString;
@protocol AMSEngagementEvent;

#import <Foundation/Foundation.h>


@interface AMDAMSEngagementEvent : NSObject <AMSEngagementEvent>



@property (retain) NSDictionary *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *engagementData; // ivar: _engagementData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif