// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSPROPERTYSET_H
#define TSSPROPERTYSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying>

 {
    id *mIndexSet;
}




+(id)p_mutableIndexSetWithFirstProperty:(int)arg0 argumentList:(char *)arg1 ;
+(id)propertySet;
+(id)propertySetWithProperties:(int)arg0 ;
+(id)propertySetWithProperty:(int)arg0 ;
-(BOOL)containsProperties:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)intersectsProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFirstProperty:(int)arg0 argumentList:(char *)arg1 ;
-(id)initWithIndexSet:(id)arg0 ;
-(id)initWithProperties:(int)arg0 ;
-(id)initWithPropertySet:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertySetByAddingProperties:(int)arg0 ;
-(id)propertySetByAddingPropertiesFromSet:(id)arg0 ;
-(id)propertySetByAddingProperty:(int)arg0 ;
-(id)propertySetByIntersectingWithPropertySet:(id)arg0 ;
-(id)propertySetByRemovingProperties:(int)arg0 ;
-(id)propertySetByRemovingPropertiesFromSet:(id)arg0 ;
-(id)propertySetByRemovingProperty:(int)arg0 ;
-(id)propertyStrings;
-(void)dealloc;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif