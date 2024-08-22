// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDSETTINGSSTORE_H
#define CLOUDSETTINGSSTORE_H

@class NSUbiquitousKeyValueStore, NSString;

#import <Foundation/Foundation.h>


@interface CloudSettingsStore : NSObject

@property (readonly) NSUbiquitousKeyValueStore *kvsStore; // ivar: _kvsStore
@property (readonly) NSString *serviceIdentifier; // ivar: _serviceIdentifier


-(BOOL)boolForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithStoreIdentifier:(id)arg0 ;
-(id)numberForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(int)keyExists:(id)arg0 andIsOfType:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)syncNow:(BOOL)arg0 ;


@end


#endif