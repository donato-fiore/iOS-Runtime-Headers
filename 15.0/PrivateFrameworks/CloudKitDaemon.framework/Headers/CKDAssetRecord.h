// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDASSETRECORD_H
#define CKDASSETRECORD_H

@class NSArray, NSMutableDictionary, CKRecordID, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CKDAssetRecord : NSObject

@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey; // ivar: _itemsByRecordKey
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSString *recordType; // ivar: _recordType
@property (readonly) unsigned int rerefSizeUpperBound;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber; // ivar: _rerefSizeUpperBoundNumber
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey; // ivar: _rereferencedItemsByRecordKey
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey; // ivar: _sectionItemsByRecordKey
@property (readonly) unsigned int sizeUpperBound;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber; // ivar: _sizeUpperBoundNumber


-(BOOL)isAssetRecord;
-(BOOL)isEmpty;
-(BOOL)isEmptyOfRereferencesAssets;
-(BOOL)isPackageSectionRecord;
-(id)CKPropertiesDescription;
-(id)allMMCSAndSectionItems;
-(id)allRecordKeys;
-(id)allRegularAndSectionAndRereferenceItems;
-(id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)arg0 ;
-(id)allRereferenceMMCSItems;
-(id)description;
-(id)firstMMCSItemError;
-(id)firstMMCSSectionItemError;
-(id)initWithRecordType:(id)arg0 recordID:(id)arg1 ;
-(void)addMMCSItem:(id)arg0 ;
-(void)addMMCSSectionItem:(id)arg0 ;
-(void)addRereferencedMMCSItem:(id)arg0 ;


@end


#endif