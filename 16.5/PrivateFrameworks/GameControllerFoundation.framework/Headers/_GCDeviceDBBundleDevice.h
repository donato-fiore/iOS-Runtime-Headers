// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEDBBUNDLEDEVICE_H
#define _GCDEVICEDBBUNDLEDEVICE_H

@class NSBundle, NSArray, NSString, NSPredicate;

#import <Foundation/Foundation.h>


@interface _GCDeviceDBBundleDevice : NSObject {
    NSBundle *_bundle;
    NSArray *_personalityPaths;
}


@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSPredicate *ioMatchingPredicate; // ivar: _ioMatchingPredicate


-(id)init;
-(id)initWithBundle:(id)arg0 dictionary:(id)arg1 error:(*id)arg2 ;
-(id)personalities;


@end


#endif