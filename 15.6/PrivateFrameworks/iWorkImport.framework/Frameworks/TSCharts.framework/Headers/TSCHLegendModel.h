// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHLEGENDMODEL_H
#define TSCHLEGENDMODEL_H

@class NSString;
@protocol TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSDMixing, NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"

@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSDMixing, NSCopying>

 {
    CGRect _legendFrame;
}


@property (weak, nonatomic) TSCHChartInfo *chartInfo; // ivar: _chartInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint legendOffset;
@property (nonatomic) CGSize legendSize;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(unsigned char)styleOwnerPathType;
-(BOOL)hasFloatValueForProperty:(int)arg0 value:(*float)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg0 value:(*int)arg1 ;
-(BOOL)hasObjectValueForProperty:(int)arg0 value:(*id)arg1 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1 ;
-(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultProperties;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg0 ;
-(id)init;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
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
-(void)loadFromPreUFFArchive:(*void)arg0 ;
-(void)loadFromUnityArchive:(*void)arg0 ;
-(void)saveToUnityArchive:(*void)arg0 ;
-(void)willModify;


@end


#endif