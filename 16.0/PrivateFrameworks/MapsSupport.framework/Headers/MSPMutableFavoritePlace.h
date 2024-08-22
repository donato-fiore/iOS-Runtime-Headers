// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPMUTABLEFAVORITEPLACE_H
#define MSPMUTABLEFAVORITEPLACE_H

@class NSString, NSUUID;
@protocol MSPFavoritePlace, GEOMapItem;


#import "MSPMutableFavorite.h"

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>



@property (nonatomic) CLLocationCoordinate2D coordinateOfDroppedPin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int floorOrdinalOfDroppedPin;
@property (retain, nonatomic) NSObject<GEOMapItem> *geoMapItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg0 ;
-(id)initWithBookmarkStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif