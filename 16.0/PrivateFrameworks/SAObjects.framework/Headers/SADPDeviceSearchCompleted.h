// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADPDEVICESEARCHCOMPLETED_H
#define SADPDEVICESEARCHCOMPLETED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand, SAAceSerializable;


#import "SABaseCommand.h"

@interface SADPDeviceSearchCompleted : SABaseCommand <SAServerBoundCommand, SAAceSerializable>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (nonatomic) BOOL remotePlaySoundRestricted;
@property (copy, nonatomic) NSArray *resolvedDevices;
@property (readonly) Class superclass;


+(id)deviceSearchCompleted;
+(id)deviceSearchCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif