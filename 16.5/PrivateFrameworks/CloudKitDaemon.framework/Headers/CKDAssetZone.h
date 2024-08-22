// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDASSETZONE_H
#define CKDASSETZONE_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CKDAssetZoneKey.h"

@interface CKDAssetZone : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetRecords; // ivar: _assetRecords
@property (retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID; // ivar: _assetRecordsByRecordID
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey; // ivar: _assetZoneKey


-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithAssetZoneKey:(id)arg0 ;
-(void)addMMCSItem:(id)arg0 ;
-(void)addMMCSSectionItem:(id)arg0 ;
-(void)addRereferencedMMCSItem:(id)arg0 ;


@end


#endif