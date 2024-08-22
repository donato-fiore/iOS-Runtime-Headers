// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRILONGPRESSBUTTONCONTEXT_H
#define SIRILONGPRESSBUTTONCONTEXT_H

@class NSUUID;


#import "SiriContext.h"

@interface SiriLongPressButtonContext : SiriContext

@property (retain, nonatomic) NSUUID *activationEventInstrumentationIdentifier; // ivar: _activationEventInstrumentationIdentifier
@property (nonatomic) CGFloat buttonDownTimestamp; // ivar: _buttonDownTimestamp
@property (nonatomic) NSInteger longPressBehavior; // ivar: _longPressBehavior


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif