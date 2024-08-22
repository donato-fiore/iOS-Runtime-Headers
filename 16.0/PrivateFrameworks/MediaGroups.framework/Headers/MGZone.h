// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGZONE_H
#define MGZONE_H



#import "MGGroup.h"

@interface MGZone : MGGroup



+(id)predicateForCurrentDevice;
+(id)predicateForType;
+(id)type;
-(id)HomeKitZoneIdentifier;
-(id)HomeKitZoneWithHomeManager:(id)arg0 ;
-(id)initWithClientService:(id)arg0 zone:(id)arg1 home:(id)arg2 ;


@end


#endif