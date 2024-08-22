// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREMOTEPASSCODEPOLICY_H
#define PUREMOTEPASSCODEPOLICY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PURemotePasscodePolicy : NSObject <NSSecureCoding>



@property (nonatomic, getter=isModificationAllowed) BOOL modificationAllowed; // ivar: _modificationAllowed
@property (nonatomic) NSUInteger passcodeMinimumLength; // ivar: _passcodeMinimumLength


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif