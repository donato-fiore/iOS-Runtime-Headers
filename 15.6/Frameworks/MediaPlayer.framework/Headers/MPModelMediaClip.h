// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELMEDIACLIP_H
#define MPMODELMEDIACLIP_H

@class NSArray, NSString;


#import "MPModelObject.h"

@interface MPModelMediaClip : MPModelObject

@property (copy, nonatomic) id *previewArtworkCatalogBlock;
@property (copy, nonatomic) NSArray *staticAssets;
@property (copy, nonatomic) NSString *title;


+(NSInteger)genericObjectType;
+(id)classesForSecureCoding;
+(id)kind;
-(id)humanDescription;
-(id)previewArtworkCatalog;


@end


#endif