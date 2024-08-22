// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT17CACOMPRESSIONVIEW_H
#define _TTC12COREAUDIOKIT17CACOMPRESSIONVIEW_H

@class TtC12CoreAudioKit13CAAUGraphView, NSArray;
@protocol _TtP12CoreAudioKit32AUCompressionParameterDataSource_><_TtP12CoreAudioKit27CAAUViewParameterDataSource_;



@interface _TtC12CoreAudioKit17CACompressionView : TtC12CoreAudioKit13CAAUGraphView {
    ? diagonalLayer;
    ? curveFill;
    ? compressionLine;
    ? expansionFill;
    ? compressionFill;
    ? compressionTriangle;
    ? accessibilityFormatter;
    ? controlList;
    ? activeGuides;
    ? paramCache;
    ? activeControl;
    ? accessibileElements;
}


@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic, retain) NSObject<_TtP12CoreAudioKit32AUCompressionParameterDataSource_><_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *dataSource; // ivar: dataSource


-(float)valueForXWithLocation:(CGFloat)arg0 ;
-(float)valueForYWithLocation:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )graphFrame;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateCompressionExpansionPaths;
-(void)updateCompressionTriangle;
-(void)updateGraph;


@end


#endif