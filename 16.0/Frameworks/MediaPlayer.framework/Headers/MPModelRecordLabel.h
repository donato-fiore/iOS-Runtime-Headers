// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELRECORDLABEL_H
#define MPMODELRECORDLABEL_H

@class NSString;


#import "MPModelObject.h"

@interface MPModelRecordLabel : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) id *editorialArtworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *shortDescriptionText;


+(NSInteger)genericObjectType;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;


@end


#endif