// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSUSERDEFAULTSTESTDOUBLEDICTIONARYIMPL_H
#define BSUSERDEFAULTSTESTDOUBLEDICTIONARYIMPL_H

@class NSUserDefaults, NSMutableDictionary;



@interface BSUserDefaultsTestDoubleDictionaryImpl : NSUserDefaults {
    NSMutableDictionary *_dictionary;
}




-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(float)floatForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)stringArrayForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)registerDefaults:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setURL:(id)arg0 forKey:(id)arg1 ;


@end


#endif