// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUTEMPORARYDOCUMENTCACHEMANAGER_H
#define TSUTEMPORARYDOCUMENTCACHEMANAGER_H



#import "TSUTemporaryDirectoryManager.h"

@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager



+(id)baseDirectoryURL;
+(id)sharedManager;
-(id)newDirectoryForDocumentUUID:(id)arg0 ;


@end


#endif