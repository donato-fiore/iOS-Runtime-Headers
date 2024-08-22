// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APJSONARCHIVER_H
#define APJSONARCHIVER_H

@class NSCoder;



@interface APJSONArchiver : NSCoder {
    id *_container;
}




+(id)JSONObjectWithObject:(id)arg0 ;
-(BOOL)_containerIsArray;
-(BOOL)allowsKeyedCoding;
-(id)_JSONObjectWithObject:(id)arg0 ;
-(id)_valueForNumber:(id)arg0 ;
-(id)init;
-(id)initWithArray;
-(id)initWithDictionary;
-(id)object;
-(void)_addClassToContainer:(Class)arg0 ;
-(void)_addValueToContainer:(id)arg0 forKey:(id)arg1 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif