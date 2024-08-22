// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOKERBEROSFILEMANAGER_H
#define SOKERBEROSFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface SOKerberosFileManager : NSObject



+(BOOL)archiveDictionary:(id)arg0 toFile:(id)arg1 ;
+(id)documentsDirectoryURLForFileName:(id)arg0 ;
+(id)loadDictionaryFromFile:(id)arg0 ;


@end


#endif