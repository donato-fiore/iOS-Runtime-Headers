// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSIDECARINFO_H
#define BRCSIDECARINFO_H

@class NSData;

#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"

@interface BRCSideCarInfo : NSObject

@property (retain, nonatomic) BRFieldCKInfo *ckInfo; // ivar: _ckInfo
@property (nonatomic) NSInteger favoriteRank; // ivar: _favoriteRank
@property (retain, nonatomic) NSData *finderTags; // ivar: _finderTags
@property (nonatomic) NSInteger lastUsedTime; // ivar: _lastUsedTime


-(BOOL)hasfieldsToSync;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithContext:(id)arg0 ;


@end


#endif