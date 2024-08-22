// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATAUDIOSESSIONUTILS_H
#define ATAUDIOSESSIONUTILS_H


#import <Foundation/Foundation.h>


@interface ATAudioSessionUtils : NSObject



+(NSUInteger)getCategoryOptionFromPropertyID:(unsigned int)arg0 ;
+(id)KVOProperties;
+(id)categories;
+(id)getAVASCategory:(unsigned int)arg0 ;
+(id)getAVASMode:(unsigned int)arg0 ;
+(id)getAVASProperty:(unsigned int)arg0 ;
+(id)getMappedObjectOf:(id)arg0 inside:(id)arg1 ofType:(int)arg2 ;
+(id)getPort:(id)arg0 forInput:(BOOL)arg1 ;
+(id)getPorts:(id)arg0 forInput:(BOOL)arg1 ;
+(id)getRouteDescriptionFromAVASRouteDescription:(id)arg0 ;
+(id)getRouteStringFromAVASRouteDescription:(id)arg0 ;
+(id)inputPortTypes;
+(id)modes;
+(id)outputPortTypes;
+(struct __CFString *)getAudioSessionPortType:(id)arg0 forInput:(BOOL)arg1 ;
+(unsigned int)getAudioSessionCategory:(id)arg0 ;
+(unsigned int)getAudioSessionMode:(id)arg0 ;
+(unsigned int)getAudioSessionProperty:(id)arg0 ;


@end


#endif