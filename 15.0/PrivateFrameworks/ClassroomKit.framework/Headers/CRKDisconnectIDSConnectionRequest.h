// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDISCONNECTIDSCONNECTIONREQUEST_H
#define CRKDISCONNECTIDSCONNECTIONREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSString;



@interface CRKDisconnectIDSConnectionRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (copy, nonatomic) NSString *instructorIdentifier; // ivar: _instructorIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif