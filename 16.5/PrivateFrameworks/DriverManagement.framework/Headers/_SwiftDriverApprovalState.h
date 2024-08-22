// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWIFTDRIVERAPPROVALSTATE_H
#define _SWIFTDRIVERAPPROVALSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SwiftDriverApprovalState : NSObject {
    ? driver;
    ? _approvalState;
    ? _updateStatus;
}


@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *usageText;


-(BOOL)driverIsApproved;
-(BOOL)updatePending;
-(id)init;


@end


#endif