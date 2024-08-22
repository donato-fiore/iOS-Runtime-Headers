// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHPROJECT_H
#define PHPROJECT_H

@class NSDate, NSData, NSString;


#import "PHAssetCollection.h"

@interface PHProject : PHAssetCollection {
    NSDate *_creationDate;
}


@property (readonly, nonatomic) BOOL hasProjectPreview;
@property (readonly, nonatomic) NSData *projectData;
@property (readonly, nonatomic) NSString *projectDocumentType; // ivar: _projectDocumentType
@property (readonly, nonatomic) NSData *projectExtensionData; // ivar: _projectExtensionData
@property (readonly, nonatomic) NSString *projectExtensionIdentifier; // ivar: _projectExtensionIdentifier
@property (readonly, nonatomic) NSString *projectRenderUuid; // ivar: _projectRenderUuid


+(id)entityKeyMap;
+(id)fetchProjectsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchProjectsWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(BOOL)canContainCustomKeyAssets;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)shouldQueryForCustomKeyAsset;
-(id)creationDate;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif