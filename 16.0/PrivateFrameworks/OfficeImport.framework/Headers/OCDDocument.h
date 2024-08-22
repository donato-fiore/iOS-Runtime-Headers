// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCDDOCUMENT_H
#define OCDDOCUMENT_H

@class NSData, NSMutableArray, OCDWriter;

#import <Foundation/Foundation.h>

#import "OADTheme.h"
#import "OADBlipCollection.h"
#import "OADTextListStyle.h"
#import "OITSUPointerKeyDictionary.h"
#import "OADGraphicStyleCache.h"
#import "OCDReader.h"
#import "OCDSummary.h"
#import "OADTableStyleCollection.h"

@interface OCDDocument : NSObject {
    OADTheme *mDocumentTheme;
    NSData *mEncryptionInfo;
}


@property (readonly, nonatomic) OADBlipCollection *blips; // ivar: mBlips
@property (readonly, nonatomic) NSMutableArray *charts; // ivar: mCharts
@property (readonly, nonatomic) OADTextListStyle *defaultTextStyle; // ivar: mDefaultTextStyle
@property (readonly, nonatomic) OITSUPointerKeyDictionary *dualDrawableMap; // ivar: mDualDrawableMap
@property (retain, nonatomic) OADGraphicStyleCache *graphicStyleCache; // ivar: mGraphicStyleCache
@property (retain, nonatomic) OCDReader *reader; // ivar: mReader
@property (readonly, nonatomic) OCDSummary *summary; // ivar: mSummary
@property (readonly, nonatomic) OADTableStyleCollection *tableStyles; // ivar: mTableStyles
@property (retain, nonatomic) OCDWriter *writer; // ivar: mWriter


-(BOOL)isFromBinaryFile;
-(id)bulletBlips;
-(id)encryptionInfo;
-(id)init;
-(id)theme;
-(void)removeUnnecessaryOverrides;
-(void)setEncryptionInfo:(id)arg0 ;
-(void)setTheme:(id)arg0 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif