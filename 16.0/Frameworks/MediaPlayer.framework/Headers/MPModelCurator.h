// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELCURATOR_H
#define MPMODELCURATOR_H

@class NSString;


#import "MPModelPerson.h"

@interface MPModelCurator : MPModelPerson

@property (copy, nonatomic) id *brandLogoArtworkCatalogBlock;
@property (nonatomic) NSInteger curatorKind;
@property (nonatomic) NSInteger curatorSubKind;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) id *editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *shortName;


+(NSInteger)genericObjectType;
-(id)brandLogoArtworkCatalog;
-(id)editorialArtworkCatalog;


@end


#endif