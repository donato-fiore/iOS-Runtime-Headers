// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNMOTIONBACKGROUNDFILL_H
#define KNMOTIONBACKGROUNDFILL_H

@class TSDFill, NSString, NSSet;
@protocol TSSStyleClient;


#import "KNMotionBackgroundStyle.h"

@interface KNMotionBackgroundFill : TSDFill <TSSStyleClient>



@property (retain, nonatomic) TSDFill *alternateFillForDowngrading; // ivar: _alternateFillForDowngrading
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle; // ivar: _motionBackgroundStyle
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly) Class superclass;


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(NSInteger)fillType;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithMotionBackgroundStyle:(id)arg0 ;
-(id)makeAlternateFillForDowngrading;
-(id)referenceColor;
-(void)didInitFromSOS;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)updateAlternateFillForDowngrading;


@end


#endif