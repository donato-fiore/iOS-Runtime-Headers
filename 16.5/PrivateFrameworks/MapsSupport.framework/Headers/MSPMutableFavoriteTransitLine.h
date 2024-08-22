// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEFAVORITETRANSITLINE_H
#define MSPMUTABLEFAVORITETRANSITLINE_H

@class NSString, NSUUID;
@protocol MSPFavoriteTransitLine, GEOTransitLine;


#import "MSPMutableFavorite.h"
#import "MSPTransitLineBookmark.h"

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite <MSPFavoriteTransitLine>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<GEOTransitLine> *transitLine;
@property (readonly, nonatomic) MSPTransitLineBookmark *transitLineBookmark;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)isUserVisibleDuplicateOfFavorite:(id)arg0 ;
-(id)initWithBookmarkStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif