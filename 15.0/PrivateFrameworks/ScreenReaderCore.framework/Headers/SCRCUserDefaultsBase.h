// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCUSERDEFAULTSBASE_H
#define SCRCUSERDEFAULTSBASE_H


#import <Foundation/Foundation.h>


@interface SCRCUserDefaultsBase : NSObject



-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)boolForKeyPath:(id)arg0 ;
-(float)floatForKey:(id)arg0 ;
-(float)floatForKeyPath:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(id)stringForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)intForKey:(id)arg0 ;
-(int)intForKeyPath:(id)arg0 ;
-(void)addObserver:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKeyPath:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKeyPath:(id)arg1 ;
-(void)setInt:(int)arg0 forKey:(id)arg1 ;
-(void)setInt:(int)arg0 forKeyPath:(id)arg1 ;


@end


#endif