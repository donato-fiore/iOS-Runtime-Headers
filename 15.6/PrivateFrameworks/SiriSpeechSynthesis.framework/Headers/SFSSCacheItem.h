// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSCACHEITEM_H
#define SFSSCACHEITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SFSSCacheItem : NSObject

@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSArray *rawAudio; // ivar: _rawAudio
@property (readonly, nonatomic) NSString *resourceKey; // ivar: _resourceKey
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSString *voiceKey; // ivar: _voiceKey


+(id)generateCacheKey:(id)arg0 text:(id)arg1 ;
-(id)initWithText:(id)arg0 voiceName:(id)arg1 voiceKey:(id)arg2 resourceKey:(id)arg3 asbd:(struct AudioStreamBasicDescription )arg4 rawAudio:(id)arg5 ;


@end


#endif