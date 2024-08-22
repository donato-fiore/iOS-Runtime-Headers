// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETVARIANTQUALIFIER_H
#define AVASSETVARIANTQUALIFIER_H

@class NSPredicate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AVAssetVariant.h"

@interface AVAssetVariantQualifier : NSObject <NSSecureCoding, NSCopying>

 {
    NSPredicate *_predicate;
    AVAssetVariant *_variant;
    NSInteger _environmentalConditions;
}


@property (nonatomic) NSInteger environmentalConditions;


+(BOOL)supportsSecureCoding;
+(id)assetVariantQualifierWithPredicate:(id)arg0 ;
+(id)assetVariantQualifierWithVariant:(id)arg0 ;
+(id)predicateForChannelCount:(NSInteger)arg0 mediaSelectionOption:(id)arg1 operatorType:(NSUInteger)arg2 ;
+(id)predicateForPresentationHeight:(CGFloat)arg0 operatorType:(NSUInteger)arg1 ;
+(id)predicateForPresentationWidth:(CGFloat)arg0 operatorType:(NSUInteger)arg1 ;
-(BOOL)_validatePredicate:(id)arg0 error:(*id)arg1 ;
-(id)_predicate;
-(id)_variant;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariant:(id)arg0 predicate:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif