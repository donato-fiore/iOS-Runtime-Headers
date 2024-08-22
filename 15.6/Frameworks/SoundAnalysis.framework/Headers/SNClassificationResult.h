// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNCLASSIFICATIONRESULT_H
#define SNCLASSIFICATIONRESULT_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNResult;

#import <Foundation/Foundation.h>


@interface SNClassificationResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNResult>

 {
    NSArray *_cachedClassifications;
}


@property (copy, nonatomic) NSDictionary *classificationDictionary; // ivar: _classificationDictionary
@property (readonly, copy) NSArray *classifications;
@property (copy, nonatomic) NSString *classifierIdentifier; // ivar: _classifierIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
+(id)classificationsFromClassificationDictionary:(id)arg0 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClassificationResult:(id)arg0 ;
-(id)_init;
-(id)binarySampleRepresentation;
-(id)classificationForIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBinarySampleRepresentation:(id)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithClassificationDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif