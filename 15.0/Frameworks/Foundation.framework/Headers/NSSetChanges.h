// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSETCHANGES_H
#define NSSETCHANGES_H

@class NSMutableSet;
@protocol NSCopying, NSFastEnumeration;



@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>



@property (readonly) NSUInteger changeCount;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isToManyChangeInformation;
-(NSInteger)_toManyPropertyType;
-(void)addChange:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)applyChangesToSet:(id)arg0 ;
-(void)enumerateChanges:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateChangesUsingBlock:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif