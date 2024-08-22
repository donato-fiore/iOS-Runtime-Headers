// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCHANGEDFOLDERSTORE_H
#define ASCHANGEDFOLDERSTORE_H

@class NSNumber, NSString, NSArray;


#import "ASItem.h"

@interface ASChangedFolderStore : ASItem

@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSString *syncKey; // ivar: _syncKey
@property (retain, nonatomic) NSArray *updatedFolders; // ivar: _updatedFolders


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif