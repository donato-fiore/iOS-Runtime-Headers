// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOWERASSERTION_H
#define SUCOREPOWERASSERTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCorePowerAssertion : NSObject <NSSecureCoding>



@property (nonatomic) int activeAssertionCount; // ivar: _activeAssertionCount
@property (nonatomic) unsigned int assertionID; // ivar: _assertionID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif