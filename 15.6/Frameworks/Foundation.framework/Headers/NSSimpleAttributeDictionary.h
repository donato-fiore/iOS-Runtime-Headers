// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSIMPLEATTRIBUTEDICTIONARY_H
#define NSSIMPLEATTRIBUTEDICTIONARY_H

@class NSDictionary;



@interface NSSimpleAttributeDictionary : NSDictionary {
    unsigned int numElements;
    unsigned int refCount;
    _NSSimpleAttributeDictionaryElement elements;
}




+(id)emptyAttributeDictionary;
+(id)newWithDictionary:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)slotForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newWithKey:(id)arg0 object:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif