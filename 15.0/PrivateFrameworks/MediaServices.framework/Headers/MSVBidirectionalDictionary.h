// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVBIDIRECTIONALDICTIONARY_H
#define MSVBIDIRECTIONALDICTIONARY_H

@class NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSDictionary *_keyToObjectDictionary;
    NSDictionary *_objectToKeyDictionary;
}




+(BOOL)supportsSecureCoding;
+(id)bidirectionalDictionary;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)keyForObject:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif