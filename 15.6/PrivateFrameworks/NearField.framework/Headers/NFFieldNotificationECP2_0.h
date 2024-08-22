// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFFIELDNOTIFICATIONECP2_0_H
#define NFFIELDNOTIFICATIONECP2_0_H

@class NSData, NSArray;


#import "NFFieldNotification.h"

@interface NFFieldNotificationECP2_0 : NFFieldNotification

@property (readonly, retain) NSData *homeKitSchemeDataPayload; // ivar: _homeKitSchemeDataPayload
@property (readonly) BOOL odaRequired; // ivar: _odaRequired
@property (readonly, retain) NSData *openLoopSchemeBitfield; // ivar: _openLoopSchemeBitfield
@property (readonly, nonatomic) unsigned int pairingMode; // ivar: _pairingMode
@property (readonly, nonatomic) NSData *readerIdentifier; // ivar: _readerIdentifier
@property (readonly, retain) NSArray *tciArray; // ivar: _tciArray
@property (readonly) unsigned char terminalSubType; // ivar: _terminalSubType
@property (readonly) NSUInteger terminalType; // ivar: _terminalType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif