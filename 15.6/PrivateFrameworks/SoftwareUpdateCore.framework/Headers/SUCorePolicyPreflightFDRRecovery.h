// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREPOLICYPREFLIGHTFDRRECOVERY_H
#define SUCOREPOLICYPREFLIGHTFDRRECOVERY_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCorePolicyPreflightFDRRecovery : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (retain, nonatomic) NSDictionary *basePreflightOptions; // ivar: _basePreflightOptions
@property (nonatomic) BOOL performPhase; // ivar: _performPhase


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif