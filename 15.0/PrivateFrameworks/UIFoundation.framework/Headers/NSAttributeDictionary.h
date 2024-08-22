// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSATTRIBUTEDICTIONARY_H
#define NSATTRIBUTEDICTIONARY_H

@class NSDictionary;



@interface NSAttributeDictionary : NSDictionary {
    NSUInteger numElements;
    _NSAttributeDictionaryElement elements;
}




+(id)emptyAttributeDictionary;
+(id)newWithDictionary:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newWithKey:(id)arg0 object:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)__apply:(*unk)arg0 context:(*void)arg1 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 andKeys:(*id)arg1 ;


@end


#endif