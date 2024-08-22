// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSCONTROLCLUSTERTARGET_H
#define CHIPACCESSCONTROLCLUSTERTARGET_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPAccessControlClusterTarget : NSObject

@property (retain, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (retain, nonatomic) NSNumber *deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint


-(id)init;


@end


#endif