// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRACCESSCONTROLCLUSTERTARGET_H
#define MTRACCESSCONTROLCLUSTERTARGET_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRAccessControlClusterTarget : NSObject

@property (retain, nonatomic) NSNumber *cluster; // ivar: _cluster
@property (retain, nonatomic) NSNumber *deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint


-(id)description;
-(id)init;


@end


#endif