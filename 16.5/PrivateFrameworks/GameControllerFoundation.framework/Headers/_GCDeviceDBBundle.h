// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEDBBUNDLE_H
#define _GCDEVICEDBBUNDLE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "_GCConfigurationBundle.h"
#import "GCVersion.h"

@interface _GCDeviceDBBundle : NSObject {
    _GCConfigurationBundle *_bundle;
}


@property (readonly, copy) NSArray *devices; // ivar: _devices
@property (readonly) NSString *identifier;
@property (readonly) GCVersion *version;


-(id)debugDescription;
-(id)description;
-(id)initWithBundle:(id)arg0 error:(*id)arg1 ;
-(id)redactedDescription;


@end


#endif