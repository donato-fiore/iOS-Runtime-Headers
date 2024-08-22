// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPTILEDARTWORKREPRESENTATIONCACHEKEY_H
#define MPTILEDARTWORKREPRESENTATIONCACHEKEY_H

@class NSString;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface MPTiledArtworkRepresentationCacheKey : NSObject <MPArtworkDataSourceVisualIdenticality>

 {
    id *_entityIdentifier;
    id *_namespaceIdentifier;
    NSUInteger _numberOfColumns;
    NSUInteger _numberOfRows;
    id *_revisionIdentifier;
    CGSize _scaledFittingSize;
    CGFloat _tileSpacing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTiledArtworkRequest:(id)arg0 scaledFittingSize:(struct CGSize )arg1 ;
-(id)stringRepresentation;


@end


#endif