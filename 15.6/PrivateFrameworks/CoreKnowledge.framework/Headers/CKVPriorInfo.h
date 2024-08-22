// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVPRIORINFO_H
#define CKVPRIORINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVPriorInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int ordinality; // ivar: _ordinality
@property (readonly, nonatomic) float score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPriorInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrdinality:(unsigned int)arg0 score:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif