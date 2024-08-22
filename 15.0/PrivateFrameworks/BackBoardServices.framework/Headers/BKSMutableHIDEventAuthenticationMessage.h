// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSMUTABLEHIDEVENTAUTHENTICATIONMESSAGE_H
#define BKSMUTABLEHIDEVENTAUTHENTICATIONMESSAGE_H



#import "BKSHIDEventAuthenticationMessage.h"
#import "BKSHIDEventHitTestLayerInformation.h"

@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (nonatomic) NSUInteger context;
@property (nonatomic) unsigned int eventType;
@property (retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent;
@property (retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent;
@property (nonatomic) NSUInteger originIdentifier;
@property (nonatomic) BOOL registrantEntitled;
@property (nonatomic) unsigned int targetContextID;
@property (nonatomic) unsigned int targetSlotID;
@property (nonatomic) NSInteger versionedPID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setDestinationAuditToken:(id)arg0 ;


@end


#endif