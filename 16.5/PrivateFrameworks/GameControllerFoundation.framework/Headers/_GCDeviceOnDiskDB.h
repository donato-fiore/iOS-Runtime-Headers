// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEONDISKDB_H
#define _GCDEVICEONDISKDB_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _GCDeviceOnDiskDB : NSObject {
    NSArray *_bundles;
}


@property (readonly, copy) NSArray *configurationBundles; // ivar: _configurationBundles


-(id)bestModelMatchingDevice:(id)arg0 ;
-(id)init;
-(id)initWithBundles:(id)arg0 ;


@end


#endif