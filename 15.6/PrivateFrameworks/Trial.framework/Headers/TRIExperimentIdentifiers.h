// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEXPERIMENTIDENTIFIERS_H
#define TRIEXPERIMENTIDENTIFIERS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIExperimentIdentifiers : NSObject <NSCopying>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExperimentIdentifiers:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithExperimentId:(id)arg0 deploymentId:(int)arg1 treatmentId:(id)arg2 ;


@end


#endif