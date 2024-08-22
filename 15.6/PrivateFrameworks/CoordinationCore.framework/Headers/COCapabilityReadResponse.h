// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCAPABILITYREADRESPONSE_H
#define COCAPABILITYREADRESPONSE_H

@class NSSet;


#import "COMeshResponse.h"

@interface COCapabilityReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSSet *capabilities; // ivar: _capabilities


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCapabilities:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif