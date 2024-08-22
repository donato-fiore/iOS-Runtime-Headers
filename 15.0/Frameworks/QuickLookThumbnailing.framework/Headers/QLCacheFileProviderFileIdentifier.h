// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLCACHEFILEPROVIDERFILEIDENTIFIER_H
#define QLCACHEFILEPROVIDERFILEIDENTIFIER_H

@class FPItemID;
@protocol NSSecureCoding;


#import "QLCacheFileIdentifier.h"

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>



@property (readonly, copy) FPItemID *itemID; // ivar: _itemID


+(BOOL)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
+(id)knownFileProviderIdentifiersSoFar;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif