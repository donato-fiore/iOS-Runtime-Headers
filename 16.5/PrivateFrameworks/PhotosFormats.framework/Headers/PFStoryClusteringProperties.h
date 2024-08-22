// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTORYCLUSTERINGPROPERTIES_H
#define PFSTORYCLUSTERINGPROPERTIES_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PFStoryClusteringProperties : NSObject

@property (readonly, nonatomic) NSString *algorithm; // ivar: _algorithm
@property (readonly, nonatomic) NSDictionary *algorithmProperties; // ivar: _algorithmProperties
@property (readonly, nonatomic) NSDictionary *distanceWeights; // ivar: _distanceWeights


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPFStoryClusteringProperties:(id)arg0 ;
-(id)description;
-(id)initWithAlgorithmName:(id)arg0 algorithmProperties:(id)arg1 distanceWeights:(id)arg2 ;


@end


#endif