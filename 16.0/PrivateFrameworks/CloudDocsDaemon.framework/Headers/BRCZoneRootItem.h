// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCZONEROOTITEM_H
#define BRCZONEROOTITEM_H

@protocol BRCFSRooted;


#import "BRCDirectoryItem.h"

@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>





-(BOOL)isDirectoryFault;
-(BOOL)isFSRoot;
-(BOOL)isShareableItem;
-(BOOL)isUserVisible;
-(BOOL)isZoneRoot;
-(BOOL)saveToDB;
-(id)asFSRoot;
-(id)extendedAttributes;
-(id)fileID;
-(id)initWithZoneRootItemID:(id)arg0 session:(id)arg1 ;
-(id)parentItemID;
-(id)parentItemOnFS;
-(id)st;
-(unsigned char)itemScope;


@end


#endif