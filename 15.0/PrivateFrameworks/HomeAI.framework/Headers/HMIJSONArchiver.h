// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIJSONARCHIVER_H
#define HMIJSONARCHIVER_H

@class NSCoder, NSString;



@interface HMIJSONArchiver : NSCoder {
    id *_container;
}


@property (readonly) NSString *objectJSON;
@property (readonly) NSString *objectPrettyJSON;
@property NSInteger options; // ivar: _options


+(id)JSONObjectStringWithObject:(id)arg0 ;
+(id)JSONObjectStringWithObject:(id)arg0 pretty:(BOOL)arg1 options:(NSInteger)arg2 ;
+(id)JSONObjectWithObject:(id)arg0 options:(NSInteger)arg1 ;
-(BOOL)_containerIsArray;
-(BOOL)allowsKeyedCoding;
-(id)_JSONObjectWithObject:(id)arg0 options:(NSInteger)arg1 ;
-(id)_valueForNumber:(id)arg0 ;
-(id)init;
-(id)initWithArray;
-(id)initWithDictionary;
-(id)object;
-(void)_addClassToContainer:(Class)arg0 ;
-(void)_addValueToContainer:(id)arg0 forKey:(id)arg1 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif