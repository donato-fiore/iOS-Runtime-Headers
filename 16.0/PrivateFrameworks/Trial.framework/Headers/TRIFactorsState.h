// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFACTORSSTATE_H
#define TRIFACTORSSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIFactorsStateExperimentIdentifiers.h"
#import "TRIFactorsStateRolloutIdentifiers.h"

@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) TRIFactorsStateRolloutIdentifiers *rolloutIdentifiers;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersisted:(id)arg0 ;
-(id)persisted;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif