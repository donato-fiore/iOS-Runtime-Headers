// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDISTRIBUTEDTIMESTAMPVECTORRANGE_H
#define CKDISTRIBUTEDTIMESTAMPVECTORRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKDistributedTimestampVector.h"

@interface CKDistributedTimestampVectorRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CKDistributedTimestampVector *from; // ivar: _from
@property (readonly, nonatomic) CKDistributedTimestampVector *to; // ivar: _to


+(BOOL)supportsSecureCoding;
-(BOOL)includes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrom:(id)arg0 to:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif