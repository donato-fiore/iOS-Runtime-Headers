// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FHFEATURESRESPONSE_H
#define FHFEATURESRESPONSE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHFeaturesResponse : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *aggregateFeatures; // ivar: _aggregateFeatures
@property (readonly, copy, nonatomic) NSArray *aggregateFeaturesWithProcessingWindow; // ivar: _aggregateFeaturesWithProcessingWindow
@property (readonly, copy, nonatomic) NSArray *compoundFeatures; // ivar: _compoundFeatures
@property (readonly, copy, nonatomic) NSArray *smartFeatures; // ivar: _smartFeatures
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSmartFeatures:(id)arg0 aggregateFeatureswithProcessingWindow:(id)arg1 compoundFeatures:(id)arg2 transactionID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif