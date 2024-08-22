// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVIUTILS_H
#define NVIUTILS_H


#import <Foundation/Foundation.h>


@interface NviUtils : NSObject



+(BOOL)_createDirAtPath:(id)arg0 ;
+(BOOL)createDirAtPath:(id)arg0 ;
+(BOOL)isNviEnabled;
+(CGFloat)getVoiceTriggerEndSecsFromVTEI:(id)arg0 ;
+(NSInteger)getVoiceTriggerEndSampleCountFromVTEI:(id)arg0 ;
+(NSUInteger)nviDataSourceTypeForStr:(id)arg0 ;
+(NSUInteger)nviSignalTypeForStr:(id)arg0 ;
+(id)getValueFromDictionaryOfDictionaries:(id)arg0 keypath:(id)arg1 ;
+(id)readJsonDictionaryAt:(id)arg0 ;
+(id)strRepForNviDataSourceType:(NSUInteger)arg0 ;
+(id)strRepForNviSignalMask:(NSUInteger)arg0 ;
+(id)strRepForNviSignalType:(NSUInteger)arg0 ;
+(id)timeStampString;


@end


#endif