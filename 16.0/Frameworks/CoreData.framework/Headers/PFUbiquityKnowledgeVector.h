// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYKNOWLEDGEVECTOR_H
#define PFUBIQUITYKNOWLEDGEVECTOR_H

@class NSDictionary;
@protocol NSCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding>

 {
    NSDictionary *_kv;
    NSDictionary *_storeKVDict;
}


@property (readonly, nonatomic) NSUInteger hash; // ivar: _hash
@property (readonly, nonatomic) NSUInteger length;


+(BOOL)supportsSecureCoding;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg0 ;
-(id)initWithKnowledgeVectorString:(id)arg0 ;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg0 ;
-(void)_updateHash;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif