// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFHOMEINFOMUTATION_H
#define _AFHOMEINFOMUTATION_H

@class NSUUID, NSString;
@protocol AFHomeInfoMutating;

#import <Foundation/Foundation.h>

#import "AFHomeInfo.h"

@interface _AFHomeInfoMutation : NSObject <AFHomeInfoMutating>

 {
    AFHomeInfo *_baseModel;
    NSUUID *_homeIdentifier;
    BOOL _activityNotificationsEnabledForPersonalRequests;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setActivityNotificationsEnabledForPersonalRequests:(BOOL)arg0 ;
-(void)setHomeIdentifier:(id)arg0 ;


@end


#endif