// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALCODINGCOLLECTION_H
#define HKMEDICALCODINGCOLLECTION_H

@class NSOrderedSet, NSArray, NSDictionary, NSSet;
@protocol NSSecureCoding, NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration>

 {
    NSOrderedSet *_codingsOrderedSet;
}


@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) NSDictionary *codingsBySystem;
@property (readonly, copy, nonatomic) NSSet *codingsSet;
@property (readonly, nonatomic) NSInteger count;


+(BOOL)supportsSecureCoding;
+(id)collectionWithCoding:(id)arg0 ;
+(id)collectionWithCodings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)codingsForCodingSystem:(id)arg0 ;
-(id)collectionByAddingCodings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif