// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLISTITEMOUTPUTREGION_H
#define CRLISTITEMOUTPUTREGION_H

@class NSString;
@protocol CROutputRegionLayoutContributing;


#import "CRCompositeOutputRegion.h"
#import "CRListItemMarker.h"

@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CRListItemMarker *marker; // ivar: _marker
@property (readonly) _NSRange markerRange;
@property (readonly) NSInteger markerType;
@property (readonly) Class superclass;


+(BOOL)textStartsWithListItem:(id)arg0 ;
+(id)_detectPredefinedListMarker:(id)arg0 fromSet:(id)arg1 markerType:(NSInteger)arg2 ;
+(id)bulletsSet;
+(id)decorativeDecimalsSet;
+(id)endOfMarkerSet;
+(id)extendedMarkersSet;
+(id)hyphensSet;
+(id)listItemForParagraph:(id)arg0 ;
+(id)listItemMarkerForText:(id)arg0 requiresAdjacentText:(BOOL)arg1 ;
+(id)startOfMarkerSet;
-(BOOL)canBeSucceededByListItem:(id)arg0 ;
-(NSUInteger)type;
-(id)initWithParagraphs:(id)arg0 marker:(id)arg1 ;
-(id)layoutComponents;
-(id)listItemByAppendingParagraph:(id)arg0 ;
-(id)regionsSuitableForDataDetectorOutput;


@end


#endif