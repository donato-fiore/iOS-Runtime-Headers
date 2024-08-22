// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLARRAYDICTIONARYFEATUREPROVIDER_H
#define MLARRAYDICTIONARYFEATUREPROVIDER_H

@class NSArray;
@protocol MLBatchProvider, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLArrayDictionaryFeatureProvider : NSObject <MLBatchProvider, NSSecureCoding>



@property (readonly, nonatomic) NSArray *array; // ivar: _array
@property (readonly, nonatomic) NSInteger count;


+(BOOL)supportsSecureCoding;
-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryFeatureProviderArray:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif