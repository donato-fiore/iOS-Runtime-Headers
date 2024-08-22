// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKTREGISTRATIONSTATUS_H
#define IDSKTREGISTRATIONSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSKTRegistrationData.h"

@interface IDSKTRegistrationStatus : NSObject <NSSecureCoding>



@property (retain, nonatomic) IDSKTRegistrationData *registeredKTData; // ivar: _registeredKTData
@property (retain, nonatomic) IDSKTRegistrationData *unregisteredKTData; // ivar: _unregisteredKTData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif