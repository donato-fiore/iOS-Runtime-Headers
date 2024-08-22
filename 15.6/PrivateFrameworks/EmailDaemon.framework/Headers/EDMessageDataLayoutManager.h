// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMESSAGEDATALAYOUTMANAGER_H
#define EDMESSAGEDATALAYOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface EDMessageDataLayoutManager : NSObject



+(id)messageDataDirectoryURLForGlobalMessageID:(NSInteger)arg0 basePath:(id)arg1 purgeable:(BOOL)arg2 ;
+(id)rootMessageDataDirectoryForBasePath:(id)arg0 purgeable:(BOOL)arg1 ;


@end


#endif