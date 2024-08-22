// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEFAVORITEREGION_H
#define MSPMUTABLEFAVORITEREGION_H

@class NSString, GEOMapRegion, NSUUID;
@protocol MSPFavoriteRegion;


#import "MSPMutableFavorite.h"

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOMapRegion *geoMapRegion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(id)initWithBookmarkStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif