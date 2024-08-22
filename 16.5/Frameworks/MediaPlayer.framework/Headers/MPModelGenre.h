// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELGENRE_H
#define MPMODELGENRE_H

@class NSDate, NSString;


#import "MPModelObject.h"

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (copy, nonatomic) NSString *name;


+(NSInteger)genericObjectType;
+(id)kindWithAlbumKind:(id)arg0 ;
-(id)artworkCatalog;
-(id)humanDescription;


@end


#endif