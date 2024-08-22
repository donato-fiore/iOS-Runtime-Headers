// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINVALIDATIONDODGINGMODIFIEREVENTRESPONSE_H
#define SBINVALIDATIONDODGINGMODIFIEREVENTRESPONSE_H

@class NSString;


#import "SBDodgingModifierEventResponse.h"

@interface SBInvalidationDodgingModifierEventResponse : SBDodgingModifierEventResponse

@property (retain, nonatomic) NSString *completionIdentifier; // ivar: _completionIdentifier
@property (nonatomic) BOOL disableCoalescing; // ivar: _disableCoalescing
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(id)responseWithOptions:(NSUInteger)arg0 ;
-(NSUInteger)type;
-(id)description;
-(id)initWithOptions:(NSUInteger)arg0 ;


@end


#endif