// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNCOMPOSEDDETECTOR_H
#define SNCOMPOSEDDETECTOR_H

@class NSString, MLModel;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNComposedDetector : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_featureExtractorType;
    MLModel *_detectorHeadModel;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif