// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFORDEREDDICTIONARY_H
#define WFORDEREDDICTIONARY_H

@class NSDictionary, NSOrderedSet;



@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSOrderedSet *keys; // ivar: _keys


+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(NSUInteger)count;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithQueryItems:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif