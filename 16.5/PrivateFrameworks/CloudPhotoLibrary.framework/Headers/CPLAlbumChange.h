// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLALBUMCHANGE_H
#define CPLALBUMCHANGE_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying;


#import "CPLContainerChange.h"

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>

 {
    NSString *_keyAssetIdentifier;
}


@property (nonatomic) BOOL albumSortAscending; // ivar: _albumSortAscending
@property (nonatomic) NSUInteger albumSortType; // ivar: _albumSortType
@property (nonatomic) NSUInteger albumType; // ivar: _albumType
@property (copy, nonatomic) NSString *importedByBundleIdentifier; // ivar: _importedByBundleIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) NSInteger position; // ivar: _position
@property (copy, nonatomic) NSData *projectData; // ivar: _projectData
@property (copy, nonatomic) NSString *projectDocumentType; // ivar: _projectDocumentType
@property (copy, nonatomic) NSData *projectPreviewImageData; // ivar: _projectPreviewImageData


+(Class)relatedRecordClass;
-(BOOL)validateRecordForTracker:(id)arg0 ;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)parentScopedIdentifier;
-(id)propertiesDescription;
-(id)relatedIdentifier;
-(id)scopedIdentifiersForMapping;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)setParentScopedIdentifier:(id)arg0 ;
-(void)setRelatedIdentifier:(id)arg0 ;


@end


#endif