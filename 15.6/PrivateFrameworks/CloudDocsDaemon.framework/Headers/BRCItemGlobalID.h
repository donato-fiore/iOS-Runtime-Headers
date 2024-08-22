// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCITEMGLOBALID_H
#define BRCITEMGLOBALID_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BRCItemID.h"
#import "BRCZoneRowID.h"

@interface BRCItemGlobalID : NSObject <NSCopying>



@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) BRCZoneRowID *zoneRowID; // ivar: _zoneRowID


+(id)itemGlobalIDFromLocalItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItemGlobalID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithZoneRowID:(id)arg0 itemID:(id)arg1 ;


@end


#endif