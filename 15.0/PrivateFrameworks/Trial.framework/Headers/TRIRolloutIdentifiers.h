// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIROLLOUTIDENTIFIERS_H
#define TRIROLLOUTIDENTIFIERS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIRolloutIdentifiers : NSObject <NSCopying>



@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *factorPackId; // ivar: _factorPackId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRolloutIdentifiers:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRolloutId:(id)arg0 deploymentId:(int)arg1 factorPackId:(id)arg2 ;


@end


#endif