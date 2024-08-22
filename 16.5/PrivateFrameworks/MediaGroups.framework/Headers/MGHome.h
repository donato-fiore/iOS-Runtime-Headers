// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGHOME_H
#define MGHOME_H



#import "MGGroup.h"

@interface MGHome : MGGroup



+(id)predicateForCurrentDevice;
+(id)predicateForType;
+(id)type;
-(id)HomeKitHomeIdentifier;
-(id)HomeKitHomeWithHomeManager:(id)arg0 ;
-(id)initWithClientService:(id)arg0 home:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 home:(id)arg1 ;


@end


#endif