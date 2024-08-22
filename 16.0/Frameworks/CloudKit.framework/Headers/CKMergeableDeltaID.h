// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMERGEABLEDELTAID_H
#define CKMERGEABLEDELTAID_H

@class NSString, CKMergeableValueID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKMergeableDeltaID : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *deltaIdentifier; // ivar: _deltaIdentifier
@property (copy, nonatomic) CKMergeableValueID *valueID; // ivar: _valueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeltaIdentifier:(id)arg0 valueID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif