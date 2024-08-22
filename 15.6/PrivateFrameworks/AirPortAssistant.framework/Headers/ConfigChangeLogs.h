// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONFIGCHANGELOGS_H
#define CONFIGCHANGELOGS_H


#import <Foundation/Foundation.h>


@interface ConfigChangeLogs : NSObject



+(id)configChangeLogFiles;
+(id)configChangeLogFilesIncludingAllKeys:(BOOL)arg0 orSpecificKeys:(id)arg1 ;
+(int)writeConfigChangeLog:(struct _BaseStation *)arg0 ;


@end


#endif