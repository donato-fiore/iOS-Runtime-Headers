// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGMEDIASYSTEM_H
#define MGMEDIASYSTEM_H

@class NSString;
@protocol MGAirPlayMetadataProtocol;


#import "MGGroup.h"

@interface MGMediaSystem : MGGroup <MGAirPlayMetadataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)predicateForCurrentDevice;
+(id)predicateForMediaSystem;
+(id)predicateForType;
+(id)type;
-(id)HomeKitMediaSystemIdentifier;
-(id)HomeKitMediaSystemWithHomeManager:(id)arg0 ;
-(id)initWithClientService:(id)arg0 mediaSystem:(id)arg1 home:(id)arg2 ;
-(id)syncUUID;


@end


#endif