// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKSYNCTYPE_H
#define _DKSYNCTYPE_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _DKSyncType : NSObject <NSSecureCoding>

 {
    BOOL _isSingleDevice;
    BOOL _forceSync;
    BOOL _isInitialSync;
    BOOL _isPeriodicSync;
    BOOL _isTriggeredSync;
    BOOL _didActivatePeer;
    BOOL _didReceivePush;
    BOOL _didAddSyncedEvents;
    BOOL _didDeleteSyncedEvents;
    NSUInteger _urgency;
    CGFloat _periodicSyncInterval;
    NSObject<OS_xpc_object> *_xpcActivity;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif