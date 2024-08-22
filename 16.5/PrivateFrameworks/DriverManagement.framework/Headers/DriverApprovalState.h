// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRIVERAPPROVALSTATE_H
#define DRIVERAPPROVALSTATE_H


#import <Foundation/Foundation.h>

#import "_SwiftDriverApprovalState.h"

@interface DriverApprovalState : NSObject {
    _SwiftDriverApprovalState *_swiftDriverApprovalState;
}




-(BOOL)driverIsApproved;
-(BOOL)updatePending;
-(id)displayName;
-(id)initWithSwiftDriverApprovalState:(id)arg0 ;
-(id)usageText;


@end


#endif