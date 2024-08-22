// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACTRACKEDSET_H
#define ACTRACKEDSET_H

@class NSMutableSet, NSMutableDictionary;
@protocol NSCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}


@property (readonly) NSUInteger count;


+(BOOL)supportsSecureCoding;
+(id)set;
+(id)setWithArray:(id)arg0 ;
+(id)setWithSet:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTrackedSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEnumerable:(id)arg0 count:(NSUInteger)arg1 ;
-(id)_initWithUnderlyingSet:(id)arg0 changesDictionary:(id)arg1 ;
-(id)allModifications;
-(id)allObjects;
-(id)anyObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithSet:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateModificationsUsingBlock:(id)arg0 ;
-(void)enumerateModificationsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif