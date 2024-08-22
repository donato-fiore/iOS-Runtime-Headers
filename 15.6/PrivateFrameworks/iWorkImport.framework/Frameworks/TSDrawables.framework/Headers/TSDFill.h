// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDFILL_H
#define TSDFILL_H

@class NSString, TSUColor;
@protocol TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset;

#import <Foundation/Foundation.h>


@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL drawsInOneStep;
@property (readonly, nonatomic) NSInteger fillType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isClear;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly, nonatomic) TSUColor *referenceColorForFontArchiving;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)p_subclassRegistry;
+(void)registerSubclass:(Class)arg0 ;
-(BOOL)requiresOutlineOnBackgroundWithAppearance:(NSUInteger)arg0 ;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif