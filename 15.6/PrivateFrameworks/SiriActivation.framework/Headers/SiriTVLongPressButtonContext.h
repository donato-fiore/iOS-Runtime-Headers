// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRITVLONGPRESSBUTTONCONTEXT_H
#define SIRITVLONGPRESSBUTTONCONTEXT_H

@class NSString;


#import "SiriLongPressButtonContext.h"

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier; // ivar: _activeDeviceBluetoothIdentifier
@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (nonatomic) BOOL isSourcePTTEligible; // ivar: _isSourcePTTEligible
@property (nonatomic) NSUInteger remoteType; // ivar: _remoteType


+(BOOL)supportsSecureCoding;
-(BOOL)isPTTEligible;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif