// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPOLICYDATA_H
#define APPOLICYDATA_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APPolicyData : NSObject <NSSecureCoding>



@property (retain) NSString *creativeIdentifier; // ivar: _creativeIdentifier
@property (retain) NSDictionary *policyValue; // ivar: _policyValue


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif