// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVMATCHINGSPANMETADATA_H
#define CKVMATCHINGSPANMETADATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKVMatchingSpanPriorInfo.h"

@interface CKVMatchingSpanMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) float matchScore; // ivar: _matchScore
@property (readonly, nonatomic) CKVMatchingSpanPriorInfo *priorInfo; // ivar: _priorInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMatchingSpanMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchScore:(float)arg0 ;
-(id)initWithMatchingSpanPriorInfo:(id)arg0 matchScore:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif