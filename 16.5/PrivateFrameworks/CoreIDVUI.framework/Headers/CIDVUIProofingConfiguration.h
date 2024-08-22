// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDVUIPROOFINGCONFIGURATION_H
#define CIDVUIPROOFINGCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CIDVUIProofingConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger target; // ivar: _target


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 country:(id)arg1 ;
-(id)initWithState:(id)arg0 country:(id)arg1 target:(NSInteger)arg2 credentialIdentifier:(id)arg3 ;
-(id)initWithState:(id)arg0 country:(id)arg1 target:(NSInteger)arg2 status:(NSInteger)arg3 credentialIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif