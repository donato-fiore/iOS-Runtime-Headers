// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERCLOUDSHAREREQUEST_H
#define HMDUSERCLOUDSHAREREQUEST_H

@class NSString, NSUUID, NSDate;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDUserCloudShareRequest : NSObject

@property (readonly) NSString *containerID; // ivar: _containerID
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 containerID:(id)arg1 home:(id)arg2 ;


@end


#endif