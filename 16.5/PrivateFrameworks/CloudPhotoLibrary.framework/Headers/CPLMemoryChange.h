// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLMEMORYCHANGE_H
#define CPLMEMORYCHANGE_H

@class NSData, NSDate, NSString;


#import "CPLRecordChange.h"
#import "CPLMemoryAssetList.h"

@interface CPLMemoryChange : CPLRecordChange

@property (copy, nonatomic) CPLMemoryAssetList *assetList; // ivar: _assetList
@property (copy, nonatomic) NSData *assetListPredicate; // ivar: _assetListPredicate
@property (copy, nonatomic) NSData *blacklistedFeature; // ivar: _blacklistedFeature
@property (nonatomic) NSInteger category; // ivar: _category
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (copy, nonatomic) NSData *graphData; // ivar: _graphData
@property (nonatomic) NSInteger graphVersion; // ivar: _graphVersion
@property (copy, nonatomic) NSData *movieData; // ivar: _movieData
@property (nonatomic) NSInteger notificationState; // ivar: _notificationState
@property (nonatomic) NSInteger playCount; // ivar: _playCount
@property (nonatomic, getter=isRejected) BOOL rejected; // ivar: _rejected
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) NSInteger shareCount; // ivar: _shareCount
@property (nonatomic) NSInteger subcategory; // ivar: _subcategory
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userActionOptions; // ivar: _userActionOptions
@property (nonatomic) NSInteger viewCount; // ivar: _viewCount


+(BOOL)supportsDeletion;
+(BOOL)supportsDirectDeletion;
+(BOOL)supportsSecureCoding;
+(id)_createTestMemoryWithAssets:(id)arg0 ;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesDescription;
-(id)scopedIdentifiersForMapping;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif