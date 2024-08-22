// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCZONEROOTITEM_H
#define BRCZONEROOTITEM_H

@protocol BRCFSRooted;


#import "BRCDirectoryItem.h"

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>





-(BOOL)isFSRoot;
-(BOOL)isShareableItem;
-(BOOL)isZoneRoot;
-(BOOL)saveToDB;
-(id)asFSRoot;
-(id)fileID;
-(id)initWithZoneRootItemID:(id)arg0 session:(id)arg1 ;
-(id)parentItemID;
-(id)parentItemOnFS;
-(id)st;


@end


#endif