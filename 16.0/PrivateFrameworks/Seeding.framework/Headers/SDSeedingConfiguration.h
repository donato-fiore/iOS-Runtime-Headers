// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDSEEDINGCONFIGURATION_H
#define SDSEEDINGCONFIGURATION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SDSeedingConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *assetAudience; // ivar: _assetAudience
@property (retain, nonatomic) NSString *catalog; // ivar: _catalog
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) NSInteger seedProgram; // ivar: _seedProgram


+(BOOL)supportsSecureCoding;
+(id)currentConfiguration;
+(id)nullConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBetaProgram:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif