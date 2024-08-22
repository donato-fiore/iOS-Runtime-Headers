// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSPLITSESSIONINFO_H
#define TUSPLITSESSIONINFO_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUNearbyDeviceHandle.h"
#import "TUNeighborhoodHandoffContext.h"

@interface TUSplitSessionInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *conversationID; // ivar: _conversationID
@property (readonly, nonatomic) TUNearbyDeviceHandle *device; // ivar: _device
@property (readonly, nonatomic) TUNeighborhoodHandoffContext *handoffContext; // ivar: _handoffContext


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationID:(id)arg0 device:(id)arg1 handoffContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif