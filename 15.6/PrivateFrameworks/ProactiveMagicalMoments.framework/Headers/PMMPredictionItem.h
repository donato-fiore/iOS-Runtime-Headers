// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMPREDICTIONITEM_H
#define PMMPREDICTIONITEM_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PMMPredictionItem : NSObject

@property (readonly, nonatomic) NSInteger anchorType; // ivar: _anchorType
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUInteger predictionSource; // ivar: _predictionSource
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSDictionary *reasonMetadata; // ivar: _reasonMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPredictionItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithBundleId:(id)arg0 predictionSource:(NSUInteger)arg1 reason:(NSInteger)arg2 reasonMetadata:(id)arg3 anchorType:(NSInteger)arg4 confidence:(CGFloat)arg5 ;


@end


#endif