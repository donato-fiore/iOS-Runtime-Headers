// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALSTRUCTUREDDATAARCHIVER_H
#define CALSTRUCTUREDDATAARCHIVER_H


#import <Foundation/Foundation.h>


@interface CalStructuredDataArchiver : NSObject



+(id)archiveDictionary:(id)arg0 error:(*id)arg1 ;
+(id)archiveDictionary:(id)arg0 permittedClasses:(id)arg1 error:(*id)arg2 ;
+(id)defaultPermittedClasses;
+(id)unarchiveDictionaryFromData:(id)arg0 error:(*id)arg1 ;
+(id)unarchiveDictionaryFromData:(id)arg0 permittedClasses:(id)arg1 error:(*id)arg2 ;


@end


#endif