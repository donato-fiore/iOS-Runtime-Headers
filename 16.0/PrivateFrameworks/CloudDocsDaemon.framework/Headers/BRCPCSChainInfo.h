// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPCSCHAININFO_H
#define BRCPCSCHAININFO_H


#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"
#import "BRCItemID.h"

@interface BRCPCSChainInfo : NSObject

@property (readonly, nonatomic) BOOL aliasTargetZoneIsShared; // ivar: _aliasTargetZoneIsShared
@property (readonly, nonatomic) unsigned int chainState; // ivar: _chainState
@property (readonly, nonatomic) BRFieldCKInfo *contentCKInfo; // ivar: _contentCKInfo
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) char itemType; // ivar: _itemType
@property (readonly, nonatomic) BRCItemID *parentID; // ivar: _parentID
@property (readonly, nonatomic) BRFieldCKInfo *structuralCKInfo; // ivar: _structuralCKInfo


-(id)initWithItemID:(id)arg0 parentID:(id)arg1 structuralCKInfo:(id)arg2 contentCKInfo:(id)arg3 itemType:(char)arg4 aliasTargetZoneIsShared:(BOOL)arg5 chainState:(unsigned int)arg6 ;


@end


#endif