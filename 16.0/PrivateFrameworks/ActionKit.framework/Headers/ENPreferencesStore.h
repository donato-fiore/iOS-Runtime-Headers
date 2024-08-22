// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENPREFERENCESSTORE_H
#define ENPREFERENCESSTORE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname; // ivar: _pathname
@property (retain, nonatomic) NSMutableDictionary *store; // ivar: _store


+(id)defaultPreferenceStore;
+(id)pathnameForStoreFilename:(id)arg0 ;
+(id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)arg0 ;
-(id)decodedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithStoreFilename:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)load;
-(void)removeAllItems;
-(void)save;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif