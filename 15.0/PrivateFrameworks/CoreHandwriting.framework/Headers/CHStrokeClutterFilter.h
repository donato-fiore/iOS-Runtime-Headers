// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSTROKECLUTTERFILTER_H
#define CHSTROKECLUTTERFILTER_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CHStrokeClutterFilter : NSObject <NSCopying>

 {
    *void _heatMap;
    NSDictionary *_CHStrokeID2HeatmapItemID;
    NSDictionary *_heatmapItemID2CHStrokeID;
}


@property (readonly, nonatomic) NSInteger highDensityStrokeCount;


-(BOOL)isEmpty;
-(BOOL)isHighDensityStroke:(id)arg0 ;
-(id)clutterFilterByAddingStrokes:(id)arg0 removingStrokeIdentifiers:(id)arg1 affectedStrokeIdentifiers:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithCanvasHeatmap:(*void)arg0 stroke2ItemMapping:(id)arg1 item2StrokeMapping:(id)arg2 ;
-(id)strokeIDsWithinRectangleRegion:(struct CGRect *)arg0 ;
-(void)dealloc;


@end


#endif