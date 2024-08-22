// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFOLDER_H
#define ASFOLDER_H

@class NSString;
@protocol NSSecureCoding;


#import "ASItem.h"

@interface ASFolder : ASItem <NSSecureCoding>



@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) int folderType; // ivar: _folderType
@property (nonatomic) int localID; // ivar: _localID
@property (copy, nonatomic) NSString *localUUID; // ivar: _localUUID
@property (copy, nonatomic) NSString *parentID; // ivar: _parentID
@property (nonatomic) BOOL renameOnCollision; // ivar: _renameOnCollision
@property (copy, nonatomic) NSString *serverID; // ivar: _serverID


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mayContainDataclasses:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFolderType:(int)arg0 serverID:(id)arg1 parentID:(id)arg2 displayName:(id)arg3 localID:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif