// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKEMERGENCYCONTACTWRAPPER_H
#define _HKEMERGENCYCONTACTWRAPPER_H


#import <Foundation/Foundation.h>

#import "_HKEmergencyContact.h"

@interface _HKEmergencyContactWrapper : NSObject

@property (retain, nonatomic) _HKEmergencyContact *contact; // ivar: _contact


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif