// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSSAMPLINGPARAMETERS_H
#define DRSSAMPLINGPARAMETERS_H

@protocol DRJSONRepresentable;

#import <Foundation/Foundation.h>


@interface DRSSamplingParameters : NSObject <DRJSONRepresentable>



@property (readonly, nonatomic) CGFloat samplingPercentage; // ivar: _samplingPercentage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSamplingParameters:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithJSONDict:(id)arg0 ;
-(id)initWithSamplingPercentage:(CGFloat)arg0 ;
-(id)jsonDictRepresentation;


@end


#endif