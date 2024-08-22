// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSINGULARCHANGEDFOLDERSTORE_H
#define ASSINGULARCHANGEDFOLDERSTORE_H

@class NSString;


#import "ASChangedFolderStore.h"

@interface ASSingularChangedFolderStore : ASChangedFolderStore

@property (retain, nonatomic) NSString *serverId; // ivar: _serverId


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;


@end


#endif