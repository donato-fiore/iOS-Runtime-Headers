// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINPERSONCONTACT_H
#define WFINPERSONCONTACT_H

@class INPerson;


#import "WFContact.h"

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person; // ivar: _person


+(BOOL)supportsSecureCoding;
+(id)contactWithPerson:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(id)INPersonRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithINPerson:(id)arg0 ;
-(id)wfName;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif