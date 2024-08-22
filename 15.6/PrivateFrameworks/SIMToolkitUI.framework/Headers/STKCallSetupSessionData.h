// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKCALLSETUPSESSIONDATA_H
#define STKCALLSETUPSESSIONDATA_H

@class NSString;


#import "STKTextSessionData.h"

@interface STKCallSetupSessionData : STKTextSessionData

@property (readonly, nonatomic) BOOL isHighPriority; // ivar: _isHighPriority
@property (readonly, copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(id)initWithText:(id)arg0 simLabel:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif