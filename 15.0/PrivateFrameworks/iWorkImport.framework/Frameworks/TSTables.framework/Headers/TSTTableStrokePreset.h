// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLESTROKEPRESET_H
#define TSTTABLESTROKEPRESET_H

@class TSPObject, NSString;
@protocol TSSPreset;



@interface TSTTableStrokePreset : TSPObject <TSSPreset>

 {
    NSUInteger mIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


-(NSUInteger)index;
-(id)initWithContext:(id)arg0 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setIndex:(NSUInteger)arg0 ;


@end


#endif