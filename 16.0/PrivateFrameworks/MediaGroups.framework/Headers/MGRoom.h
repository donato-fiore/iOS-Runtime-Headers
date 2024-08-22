// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGROOM_H
#define MGROOM_H



#import "MGGroup.h"

@interface MGRoom : MGGroup



+(id)predicateForCurrentDevice;
+(id)predicateForType;
+(id)type;
-(id)HomeKitRoomIdentifier;
-(id)HomeKitRoomWithHomeManager:(id)arg0 ;
-(id)initWithClientService:(id)arg0 room:(id)arg1 home:(id)arg2 ;


@end


#endif