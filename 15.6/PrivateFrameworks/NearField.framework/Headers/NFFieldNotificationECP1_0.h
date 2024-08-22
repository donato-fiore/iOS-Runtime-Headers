// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFFIELDNOTIFICATIONECP1_0_H
#define NFFIELDNOTIFICATIONECP1_0_H



#import "NFFieldNotification.h"

@interface NFFieldNotificationECP1_0 : NFFieldNotification

@property (readonly) BOOL odaRequired; // ivar: _odaRequired
@property (readonly) unsigned int terminalMode; // ivar: _terminalMode
@property (readonly) unsigned int terminalType; // ivar: _terminalType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionaryForDavenport:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif