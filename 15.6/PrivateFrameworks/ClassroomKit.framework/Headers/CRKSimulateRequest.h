// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSIMULATEREQUEST_H
#define CRKSIMULATEREQUEST_H

@class CATTaskRequest;


#import "CRKIDSLocalSimulationConfiguration.h"

@interface CRKSimulateRequest : CATTaskRequest

@property (retain, nonatomic) CRKIDSLocalSimulationConfiguration *IDSLocalConfiguration; // ivar: _IDSLocalConfiguration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif