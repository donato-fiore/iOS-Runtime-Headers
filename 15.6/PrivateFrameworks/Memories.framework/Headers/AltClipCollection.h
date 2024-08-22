// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ALTCLIPCOLLECTION_H
#define ALTCLIPCOLLECTION_H

@class NSArray, NSMutableDictionary;
@protocol NSFastEnumeration, NSCopying, AltAspect;

#import <Foundation/Foundation.h>


@interface AltClipCollection : NSObject <NSFastEnumeration, NSCopying>



@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;
@property (retain, nonatomic) NSMutableDictionary *clips; // ivar: _clips
@property (readonly) NSUInteger count;
@property (weak, nonatomic) NSObject<AltAspect> *parentClip; // ivar: _parentClip


+(id)recommendedAdditionalAspects;
+(id)recommendedAspects;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParent:(id)arg0 ;
-(id)objectClosestToKeyedSubscript:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif