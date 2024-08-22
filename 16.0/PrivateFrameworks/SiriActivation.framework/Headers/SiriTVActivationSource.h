// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITVACTIVATIONSOURCE_H
#define SIRITVACTIVATIONSOURCE_H

@class NSString;


#import "SiriLongPressButtonSource.h"
#import "SiriLongPressButtonContext.h"

@interface SiriTVActivationSource : SiriLongPressButtonSource

@property (retain, nonatomic) SiriLongPressButtonContext *context; // ivar: _context
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (nonatomic) CGFloat longPressInterval; // ivar: _longPressInterval
@property (nonatomic) NSUInteger remoteType; // ivar: _remoteType


+(id)activationSourceForIdentifier:(NSInteger)arg0 ;
-(void)setListening:(BOOL)arg0 ;
-(void)setPTTEligible:(BOOL)arg0 ;


@end


#endif