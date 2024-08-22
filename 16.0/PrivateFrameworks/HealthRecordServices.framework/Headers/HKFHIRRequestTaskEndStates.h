// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRREQUESTTASKENDSTATES_H
#define HKFHIRREQUESTTASKENDSTATES_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "HKFHIRRequestTaskEndState.h"

@interface HKFHIRRequestTaskEndStates : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, nonatomic) NSString *eventLoggingDescription;
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndState *firstObject;
@property (readonly, copy, nonatomic) NSArray *objects; // ivar: _objects


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndState:(id)arg0 ;
-(id)initWithEndStates:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif