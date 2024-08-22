// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEDBBUNDLEDEVICEPERSONALITIESENUMERATOR_H
#define _GCDEVICEDBBUNDLEDEVICEPERSONALITIESENUMERATOR_H

@class NSEnumerator, NSBundle;



@interface _GCDeviceDBBundleDevicePersonalitiesEnumerator : NSEnumerator {
    NSBundle *_bundle;
    NSEnumerator *_personalitiesPaths;
}




-(id)initWithBundle:(id)arg0 personalityPaths:(id)arg1 ;
-(id)nextObject;


@end


#endif