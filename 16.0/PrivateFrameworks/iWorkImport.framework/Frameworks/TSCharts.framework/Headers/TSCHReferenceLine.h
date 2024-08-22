// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHREFERENCELINE_H
#define TSCHREFERENCELINE_H

@class NSString, NSUUID;
@protocol TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning;

#import <Foundation/Foundation.h>

#import "TSCHChartModel.h"
#import "TSCHReferenceLineStyle.h"
#import "TSCHReferenceLineNonStyle.h"
#import "TSCHChartAxis.h"
#import "TSCHChartAxisID.h"

@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning>

 {
    TSCHChartModel *_model;
    TSCHReferenceLineStyle *_style;
    TSCHReferenceLineNonStyle *_nonStyle;
    NSUInteger _styleSwapIndex;
}


@property (readonly, weak, nonatomic) TSCHChartAxis *axis;
@property (readonly, copy, nonatomic) TSCHChartAxisID *axisID; // ivar: _axisID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL labelShowing;
@property (readonly, nonatomic) BOOL lineShowing;
@property (readonly, nonatomic) NSUInteger refLineType;
@property (readonly, nonatomic) NSUInteger styleSwapIndex;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _UUID
@property (readonly, nonatomic) BOOL valueLabelShowing;


+(NSUInteger)maxNumberOfReferenceLines;
+(NSUInteger)maxNumberOfReferenceLinesOfType:(NSUInteger)arg0 ;
+(NSUInteger)refLineIndexFromStyleSwapOrStyleOwnerIndex:(NSUInteger)arg0 ;
+(NSUInteger)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg0 refLineIndex:(NSUInteger)arg1 ;
+(id)axisIDFromStyleSwapOrStyleOwnerIndex:(NSUInteger)arg0 ;
+(id)defaultNonStyleWithContext:(id)arg0 referenceLineType:(NSUInteger)arg1 axis:(id)arg2 ;
+(id)p_lineLabelForType:(NSUInteger)arg0 ;
+(unsigned char)styleOwnerPathType;
-(BOOL)hasFloatValueForProperty:(int)arg0 value:(*float)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg0 value:(*int)arg1 ;
-(BOOL)hasObjectValueForProperty:(int)arg0 value:(*id)arg1 ;
-(CGFloat)referenceLineAxisValue;
-(float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1 ;
-(id)chartInfo;
-(id)context;
-(id)defaultProperties;
-(id)drawableInfo;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg0 ;
-(id)initWithModel:(id)arg0 axisID:(id)arg1 index:(NSUInteger)arg2 uuid:(id)arg3 ;
-(id)localizedTypeName;
-(id)model;
-(id)nonstyle;
-(id)objectValueForProperty:(int)arg0 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg0 ;
-(id)p_genericToDefaultPropertyMap;
-(id)style;
-(id)swapTuplesForMutations:(id)arg0 forImport:(BOOL)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1 ;
-(id)valueForProperty:(int)arg0 ;
-(int)defaultPropertyForGeneric:(int)arg0 ;
-(int)intValueForProperty:(int)arg0 defaultValue:(int)arg1 ;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(void)setStyle:(id)arg0 nonStyle:(id)arg1 ;


@end


#endif