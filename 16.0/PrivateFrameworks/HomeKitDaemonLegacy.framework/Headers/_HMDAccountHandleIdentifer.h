// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDACCOUNTHANDLEIDENTIFER_H
#define _HMDACCOUNTHANDLEIDENTIFER_H



#import "HMDAccountIdentifier.h"
#import "HMDAccountHandle.h"

@interface _HMDAccountHandleIdentifer : HMDAccountIdentifier

@property (readonly, copy) HMDAccountHandle *accountHandle; // ivar: _accountHandle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)identifier;
-(id)initWithAccountHandle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)kind;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif