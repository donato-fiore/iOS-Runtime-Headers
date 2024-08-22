// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERCOLORVARIATIONSCONFIGURATION_H
#define PRPOSTERCOLORVARIATIONSCONFIGURATION_H

@class NSString, NSDictionary;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRPosterColorVariationsConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variationStorage; // ivar: _variationStorage
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariationStorage:(id)arg0 version:(NSUInteger)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif