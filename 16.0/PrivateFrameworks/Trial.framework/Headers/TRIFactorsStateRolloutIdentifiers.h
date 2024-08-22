// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFACTORSSTATEROLLOUTIDENTIFIERS_H
#define TRIFACTORSSTATEROLLOUTIDENTIFIERS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorsStateRolloutIdentifiers : NSObject <NSCopying>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentifiers:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRolloutId:(id)arg0 deploymentId:(int)arg1 ;


@end


#endif