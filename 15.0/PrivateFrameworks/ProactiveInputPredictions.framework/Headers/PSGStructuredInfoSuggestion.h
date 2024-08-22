// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGSTRUCTUREDINFOSUGGESTION_H
#define PSGSTRUCTUREDINFOSUGGESTION_H

@class PPQuickTypeItem;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PSGOperationalPredictedItem.h"
#import "PSGProactiveTrigger.h"

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem; // ivar: _operationalItem
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem; // ivar: _portraitItem
@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger; // ivar: _proactiveTrigger


+(BOOL)supportsSecureCoding;
-(BOOL)isApplePay;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProactiveTrigger:(id)arg0 portraitItem:(id)arg1 operationalItem:(id)arg2 ;
-(id)predictedValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif