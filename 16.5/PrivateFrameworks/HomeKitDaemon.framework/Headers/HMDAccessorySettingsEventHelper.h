// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETTINGSEVENTHELPER_H
#define HMDACCESSORYSETTINGSEVENTHELPER_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface HMDAccessorySettingsEventHelper : NSObject {
    NSDictionary *_keyPathMap;
    NSArray *_keyPaths;
}




-(BOOL)remoteEventAllowedForKeyPath:(id)arg0 deviceType:(NSUInteger)arg1 userType:(NSUInteger)arg2 ;
-(NSUInteger)remoteDeviceAccessControlForTopic:(id)arg0 ;
-(NSUInteger)remoteUserAccessControlForTopic:(id)arg0 ;
-(id)allTopicsForHome:(id)arg0 accessory:(id)arg1 ;
-(id)init;
-(id)initWithKeyPathMap:(id)arg0 keyPathList:(id)arg1 ;


@end


#endif