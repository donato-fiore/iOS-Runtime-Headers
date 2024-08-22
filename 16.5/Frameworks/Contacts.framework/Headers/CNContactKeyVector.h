// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTKEYVECTOR_H
#define CNCONTACTKEYVECTOR_H

@class NSString;
@protocol NSMutableCopying, CNKeyDescriptor_Private;

#import <Foundation/Foundation.h>


@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private>

 {
    NSInteger _bitBuckets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)freezeIfClassIsImmutable:(id)arg0 ;
+(id)keyVector;
+(id)keyVectorWithAllKeys;
+(id)keyVectorWithKey:(id)arg0 ;
+(id)keyVectorWithKeys:(id)arg0 ;
-(*NSInteger)_bitBuckets;
-(BOOL)containsAllKeys;
-(BOOL)containsKey:(id)arg0 ;
-(BOOL)intersectsKeyVector:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKeyVector:(id)arg0 ;
-(BOOL)isSubsetOfKeyVector:(id)arg0 ;
-(id)_cn_ignorableKeys;
-(id)_cn_optionalKeys;
-(id)_cn_requiredKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAllKeys;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeys:(id)arg0 ;
-(id)keyVectorByAddingKey:(id)arg0 ;
-(id)keyVectorByAddingKeys:(id)arg0 ;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg0 ;
-(id)keyVectorByRemovingKeys:(id)arg0 ;
-(id)keyVectorByRemovingKeysFromKeyVector:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_checkStorageSize;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif