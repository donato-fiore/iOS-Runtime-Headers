// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCOLLECTION_H
#define ASCOLLECTION_H

@class NSString, NSNumber, NSArray;


#import "ASItem.h"
#import "ASFolderItemsSyncResponse.h"

@interface ASCollection : ASItem {
    NSInteger _dataclass;
    NSString *_syncKey;
    NSString *_collectionId;
    NSNumber *_status;
    NSNumber *_moreAvailable;
    NSArray *_changedItems;
    NSArray *_responseItems;
    ASFolderItemsSyncResponse *_parentResponse;
    int _sniffableType;
    BOOL _checkedShouldSniffInvites;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(NSInteger)dataclass;
-(id)changedItems;
-(id)collectionId;
-(id)description;
-(id)init;
-(id)moreAvailable;
-(id)responseItems;
-(id)status;
-(id)syncKey;
-(int)sniffableTypeForAccount:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)setChangedItems:(id)arg0 ;
-(void)setCollectionId:(id)arg0 ;
-(void)setDataclassString:(id)arg0 ;
-(void)setMoreAvailable:(id)arg0 ;
-(void)setParentResponse:(id)arg0 ;
-(void)setResponseItems:(id)arg0 ;
-(void)setStatus:(id)arg0 ;
-(void)setSyncKey:(id)arg0 ;


@end


#endif