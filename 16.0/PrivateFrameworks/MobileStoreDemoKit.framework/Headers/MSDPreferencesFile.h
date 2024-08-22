// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDPREFERENCESFILE_H
#define MSDPREFERENCESFILE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSDPreferencesFile : NSObject

@property (retain) NSMutableDictionary *cache; // ivar: _cache


+(BOOL)preferencesFileExists;
+(id)preferencesFilePath;
+(id)preferencesFileUrl;
+(id)sharedInstance;
-(BOOL)removeObjectForKey:(id)arg0 ;
-(BOOL)removeObjectsForKeys:(id)arg0 ;
-(BOOL)saveCache;
-(BOOL)setObject:(id)arg0 forKey:(id)arg1 ;
-(id)deepCopy:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)populateCache;
-(void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg0 ;
-(void)reload;


@end


#endif