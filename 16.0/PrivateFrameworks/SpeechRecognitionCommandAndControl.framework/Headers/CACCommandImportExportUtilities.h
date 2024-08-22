// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCOMMANDIMPORTEXPORTUTILITIES_H
#define CACCOMMANDIMPORTEXPORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface CACCommandImportExportUtilities : NSObject



+(BOOL)isSupportedCommandType:(id)arg0 ;
+(NSUInteger)maximumNumberOfAllowedEntries;
+(id)defaultExportURL;
+(id)exportToURL:(id)arg0 ;
+(id)importFromURL:(id)arg0 ;


@end


#endif