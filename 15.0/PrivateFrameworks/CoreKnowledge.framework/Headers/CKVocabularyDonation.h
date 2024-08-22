// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYDONATION_H
#define CKVOCABULARYDONATION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKVOriginApp.h"

@interface CKVocabularyDonation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (readonly, nonatomic) CKVOriginApp *originApp; // ivar: _originApp
@property (readonly, nonatomic) NSArray *serializedItems; // ivar: _serializedItems


+(BOOL)supportsSecureCoding;
+(id)builderWithOriginApp:(id)arg0 itemClass:(Class)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDonation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginApp:(id)arg0 serializedItems:(id)arg1 itemType:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif