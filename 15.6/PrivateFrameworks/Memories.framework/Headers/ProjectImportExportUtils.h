// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROJECTIMPORTEXPORTUTILS_H
#define PROJECTIMPORTEXPORTUTILS_H


#import <Foundation/Foundation.h>


@interface ProjectImportExportUtils : NSObject



+(BOOL)doesProjectFileExistForProject:(id)arg0 ;
+(BOOL)isValidProjectName:(id)arg0 ;
+(id)exportPathForProject:(id)arg0 ;
+(id)incrementTrailingCount:(id)arg0 delim:(id)arg1 ;
+(id)makeUniquePath:(id)arg0 delimiter:(id)arg1 ;
+(unsigned int)getTrailingCount:(id)arg0 delim:(id)arg1 range:(struct _NSRange *)arg2 ;
+(void)reconnectSharedMediaToProject:(id)arg0 usingDatemap:(id)arg1 ;


@end


#endif