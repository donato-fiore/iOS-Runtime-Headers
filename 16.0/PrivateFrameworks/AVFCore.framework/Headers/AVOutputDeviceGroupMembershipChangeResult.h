// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEGROUPMEMBERSHIPCHANGERESULT_H
#define AVOUTPUTDEVICEGROUPMEMBERSHIPCHANGERESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVOutputDeviceGroupMembershipChangeResult : NSObject {
    NSInteger _status;
    NSString *_cancellationReason;
}


@property (readonly) NSString *cancellationReason;
@property (readonly) NSInteger status;


-(id)initWithStatus:(NSInteger)arg0 cancellationReason:(id)arg1 ;
-(void)dealloc;


@end


#endif