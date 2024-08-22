// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSIDENTIFIERKEY_H
#define AMSMETRICSIDENTIFIERKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSMetricsIdentifierKey : NSObject

@property (nonatomic) BOOL crossDeviceSync; // ivar: _crossDeviceSync
@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)keyWithName:(id)arg0 crossDeviceSync:(BOOL)arg1 ;


@end


#endif