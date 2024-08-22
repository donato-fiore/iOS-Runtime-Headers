// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATREMOTECONNECTIONSOCKETOPTIONS_H
#define CATREMOTECONNECTIONSOCKETOPTIONS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CATRemoteConnectionSocketOptions : NSObject

@property (copy, nonatomic) NSNumber *adaptiveWriteTimeout; // ivar: _adaptiveWriteTimeout
@property (copy, nonatomic) NSNumber *keepAliveCount; // ivar: _keepAliveCount
@property (copy, nonatomic) NSNumber *keepAliveDelay; // ivar: _keepAliveDelay
@property (copy, nonatomic) NSNumber *keepAliveEnabled; // ivar: _keepAliveEnabled
@property (copy, nonatomic) NSNumber *keepAliveInterval; // ivar: _keepAliveInterval
@property (copy, nonatomic) NSNumber *netServiceType; // ivar: _netServiceType


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif