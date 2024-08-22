// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBLACKLIST_H
#define _DPBLACKLIST_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface _DPBlacklist : NSObject

@property (readonly, nonatomic) NSSet *blacklist; // ivar: _blacklist
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)blacklistExistsWithKey:(id)arg0 inDirectory:(id)arg1 ;
+(id)blacklistForKey:(id)arg0 fromConfigurationsFile:(id)arg1 ;
+(id)blacklistForKey:(id)arg0 systemBlacklistDirectory:(id)arg1 runtimeBlacklistDirectory:(id)arg2 ;
+(id)extractKeyFromFileName:(id)arg0 ;
+(id)filePathWithKey:(id)arg0 inDirectory:(id)arg1 ;
+(void)initialize;
+(void)removeBlackListForKey:(id)arg0 ;
+(void)removeBlackListsForKeys:(id)arg0 ;
+(void)resetAllBlacklists;
-(id)init;
-(id)initWithKey:(id)arg0 fromConfigurationsFile:(id)arg1 ;


@end


#endif