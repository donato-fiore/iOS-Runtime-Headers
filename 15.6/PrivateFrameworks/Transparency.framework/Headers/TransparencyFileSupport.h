// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYFILESUPPORT_H
#define TRANSPARENCYFILESUPPORT_H


#import <Foundation/Foundation.h>


@interface TransparencyFileSupport : NSObject



+(BOOL)deleteFile:(id)arg0 error:(*id)arg1 ;
+(BOOL)setProtectionToClassDForURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)writeDictionaryToFile:(id)arg0 fileName:(id)arg1 error:(*id)arg2 ;
+(NSInteger)directorySizeInKB:(*id)arg0 ;
+(id)appSupportPath:(*id)arg0 ;
+(id)readDataFromFile:(id)arg0 error:(*id)arg1 ;
+(id)readDictionaryFromFile:(id)arg0 error:(*id)arg1 ;


@end


#endif