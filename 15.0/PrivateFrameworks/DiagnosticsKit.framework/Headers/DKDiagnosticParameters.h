// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDIAGNOSTICPARAMETERS_H
#define DKDIAGNOSTICPARAMETERS_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DKDiagnosticParameters : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSDictionary *predicates; // ivar: _predicates
@property (readonly, nonatomic) NSDictionary *specifications; // ivar: _specifications


+(BOOL)supportsSecureCoding;
+(id)diagnosticParametersWithDictionary:(id)arg0 ;
-(id)_decoderClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif