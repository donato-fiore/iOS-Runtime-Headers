// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMATCHINGSPANPRIORINFO_H
#define CKVMATCHINGSPANPRIORINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKVMatchingSpanPriorInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) unsigned int ordinality; // ivar: _ordinality
@property (readonly, nonatomic) float score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMatchingSpanPriorInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrdinality:(unsigned int)arg0 score:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif