// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMULTIVALUEMERGEABLEDELTAREGISTERSTATE_H
#define CKMULTIVALUEMERGEABLEDELTAREGISTERSTATE_H

@class NSUUID, NSData, CKDistributedTimestampStateVector;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKMultiValueMergeableDeltaRegisterState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *salt; // ivar: _salt
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector; // ivar: _vector


+(BOOL)supportsSecureCoding;
+(id)newSalt;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 vector:(id)arg1 salt:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif