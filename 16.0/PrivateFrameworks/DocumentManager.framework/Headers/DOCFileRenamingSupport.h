// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCFILERENAMINGSUPPORT_H
#define DOCFILERENAMINGSUPPORT_H


#import <Foundation/Foundation.h>


@interface DOCFileRenamingSupport : NSObject



+(BOOL)_validateFileName:(id)arg0 error:(*id)arg1 ;
+(id)_filteredNameForName:(id)arg0 error:(*id)arg1 ;
+(id)_urlForProposedName:(id)arg0 originalURL:(id)arg1 error:(*id)arg2 ;
+(id)fallbackRename:(id)arg0 toProposedName:(id)arg1 error:(*id)arg2 ;


@end


#endif