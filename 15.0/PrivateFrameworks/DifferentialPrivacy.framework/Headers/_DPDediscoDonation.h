// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPDEDISCODONATION_H
#define _DPDEDISCODONATION_H

@class NSDictionary, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPDediscoDonation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *algorithmParameters; // ivar: _algorithmParameters
@property (nonatomic) NSInteger dimension; // ivar: _dimension
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *serverAlgorithm; // ivar: _serverAlgorithm
@property (copy, nonatomic) NSData *share1; // ivar: _share1
@property (copy, nonatomic) NSData *share2; // ivar: _share2


+(BOOL)supportsSecureCoding;
+(id)requiredClasses;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 share1:(id)arg1 share2:(id)arg2 dimension:(NSInteger)arg3 metadata:(id)arg4 serverAlgorithm:(id)arg5 algorithmParameters:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif