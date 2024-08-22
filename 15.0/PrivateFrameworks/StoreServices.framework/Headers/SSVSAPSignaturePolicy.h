// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSAPSIGNATUREPOLICY_H
#define SSVSAPSIGNATUREPOLICY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVSAPSignaturePolicy : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger policyType; // ivar: _policyType
@property (readonly, copy, nonatomic) NSArray *signatureComponents; // ivar: _signatureComponents


-(id)_dataToSignWithDataSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataToSignWithRequestProperties:(id)arg0 ;
-(id)dataToSignWithURLRequest:(id)arg0 ;
-(id)dataToSignWithURLResponse:(id)arg0 responseData:(id)arg1 ;
-(id)initWithPolicyType:(NSInteger)arg0 ;
-(id)initWithPolicyType:(NSInteger)arg0 signatureComponents:(id)arg1 ;
-(id)initWithSignedActionsDictionary:(id)arg0 ;


@end


#endif