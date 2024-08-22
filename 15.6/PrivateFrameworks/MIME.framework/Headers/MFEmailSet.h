// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFEMAILSET_H
#define MFEMAILSET_H

@class EAEmailAddressSet;



@interface MFEmailSet : EAEmailAddressSet {
    *__CFSet _set;
}




+(id)set;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg0 ;
-(id)allCommentedAddresses;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithSet:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)serializedRepresentation;
-(void)_setupSetWithCapacity:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif