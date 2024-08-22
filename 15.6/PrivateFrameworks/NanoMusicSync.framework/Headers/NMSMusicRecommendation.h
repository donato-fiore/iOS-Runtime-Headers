// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMUSICRECOMMENDATION_H
#define NMSMUSICRECOMMENDATION_H

@class NSMapTable, NSDate, MPArtworkCatalog, NSString, NSOrderedSet, NSArray;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSMusicRecommendation : NSObject <NSCopying>

 {
    NSMapTable *_itemSectionMap;
    NSDate *_lastModifiedDate;
    MPArtworkCatalog *_artworkCatalog;
    NSObject<OS_dispatch_queue> *_serializerQueue;
}


@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSOrderedSet *items; // ivar: _items
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSArray *storeRecommendationModelObjects;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type;


+(id)_missingArtImage;
+(void)_fillArtworkMutableArray:(id)arg0 toCount:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)nms_isRecentMusic;
-(NSUInteger)recommendationSectionTypeForModelObject:(id)arg0 ;
-(id)_tiledArtworkRequestForPlaylists:(id)arg0 albums:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initRecentMusicRecommendationWithItems:(id)arg0 itemSectionMap:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 items:(id)arg2 itemSectionMap:(id)arg3 ;
-(id)sectionForItemWithIdentifiers:(id)arg0 ;


@end


#endif