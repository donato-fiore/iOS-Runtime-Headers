// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAPLUGIN_H
#define ASAPLUGIN_H

@class NSArray, NSString, NSURL;


#import "ASAObject.h"

@interface ASAPlugin : ASAObject

@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *boxObjectIDs;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSURL *resourceBundleURL;


+(id)pluginWithBundleIdentifier:(id)arg0 ;
-(id)audioDeviceWithUID:(id)arg0 ;
-(id)boxWithUID:(id)arg0 ;
-(id)clockDeviceWithUID:(id)arg0 ;
-(id)coreAudioClassName;
-(id)deviceObjectIDs;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(unsigned int)audioDeviceObjectIDWithUID:(id)arg0 ;
-(unsigned int)boxObjectIDWithUID:(id)arg0 ;
-(unsigned int)clockDeviceObjectIDWithUID:(id)arg0 ;


@end


#endif