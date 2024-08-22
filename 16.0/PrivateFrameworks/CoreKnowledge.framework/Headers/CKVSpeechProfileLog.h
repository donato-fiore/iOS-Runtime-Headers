// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSPEECHPROFILELOG_H
#define CKVSPEECHPROFILELOG_H


#import <Foundation/Foundation.h>

#import "CKVDictionaryLog.h"

@interface CKVSpeechProfileLog : NSObject {
    CKVDictionaryLog *_log;
}


@property (readonly, nonatomic) NSInteger locale; // ivar: _locale


+(id)allLogsInProfileDirectory:(id)arg0 ;
-(BOOL)remove;
-(id)_getOrCreateDictionaryForKey:(id)arg0 ;
-(id)_updateVersion:(id)arg0 forKeys:(id)arg1 logKey:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithProfileDirectory:(id)arg0 locale:(NSInteger)arg1 ;
-(id)lastCompletedVersionForOriginAppId:(id)arg0 ;
-(id)lastCompletedVersionForSpeechCategory:(id)arg0 ;
-(id)lastRegisteredVersionForSpeechCategory:(id)arg0 ;
-(void)recordUpdateCompletedForSpeechCategories:(id)arg0 originAppIds:(id)arg1 version:(id)arg2 ;
-(void)registerUpdateForSpeechCategories:(id)arg0 version:(id)arg1 ;


@end


#endif