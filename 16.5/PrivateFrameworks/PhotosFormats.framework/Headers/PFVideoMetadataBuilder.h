// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFVIDEOMETADATABUILDER_H
#define PFVIDEOMETADATABUILDER_H

@class NSArray;


#import "PFMetadataBuilder.h"

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSArray *metadataItems;


-(id)accessibilityDescriptionItem;
-(id)captionItem;
-(id)commonItemForKey:(id)arg0 string:(id)arg1 ;
-(id)creationDateItem;
-(id)keywordsItem;
-(id)locationItem;
-(id)titleItem;
-(id)videoDateFormatter;


@end


#endif