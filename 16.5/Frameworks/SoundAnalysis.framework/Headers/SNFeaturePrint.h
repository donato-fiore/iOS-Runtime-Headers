// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFEATUREPRINT_H
#define SNFEATUREPRINT_H

@class NSString, MLMultiArray;
@protocol SNTimeRangeProvidingWritable, SNTimeRangeProviding;

#import <Foundation/Foundation.h>


@interface SNFeaturePrint : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger featurePrintType; // ivar: _featurePrintType
@property (readonly, nonatomic) MLMultiArray *featureVector; // ivar: _featureVector
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeaturePrintType:(NSInteger)arg0 featureVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif