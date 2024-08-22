// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPTILEDARTWORKREQUEST_H
#define MPTILEDARTWORKREQUEST_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPTiledArtworkRequest : NSObject <NSCopying>

 {
    os_unfair_lock_s _cacheLock;
    NSArray *_artworkCatalogsCache;
    NSInteger _artworkCatalogsCacheCount;
}


@property (nonatomic) BOOL allowsSynchronousArtworkCatalogsBlockExecution; // ivar: _allowsSynchronousArtworkCatalogsBlockExecution
@property (copy, nonatomic) id *artworkCatalogsBlock; // ivar: _artworkCatalogsBlock
@property (copy, nonatomic) NSObject<NSCopying> *entityIdentifier; // ivar: _entityIdentifier
@property (copy, nonatomic) NSObject<NSCopying> *namespaceIdentifier; // ivar: _namespaceIdentifier
@property (nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
@property (copy, nonatomic) NSObject<NSCopying> *revisionIdentifier; // ivar: _revisionIdentifier
@property (nonatomic) CGFloat tileSpacing; // ivar: _tileSpacing


-(BOOL)hasExistingArtworkCatalogsWithCount:(NSInteger)arg0 ;
-(id)artworkCatalogsWithCount:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)existingArtworkCatalogsWithCount:(NSInteger)arg0 ;
-(id)init;


@end


#endif