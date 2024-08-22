// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMOTEPLAYBACKDEVICELIST_H
#define SAREMOTEPLAYBACKDEVICELIST_H

@class NSString, NSArray;
@protocol SABackgroundContextObject;


#import "SADomainObject.h"

@interface SARemotePlaybackDeviceList : SADomainObject <SABackgroundContextObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *remotePlaybackDevices;
@property (readonly) Class superclass;


+(id)remotePlaybackDeviceList;
+(id)remotePlaybackDeviceListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif