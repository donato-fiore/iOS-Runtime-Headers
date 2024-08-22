// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT21CAAUNBANDEQHEADERVIEW_H
#define _TTC12COREAUDIOKIT21CAAUNBANDEQHEADERVIEW_H

@class TtC12CoreAudioKit16CAAUEQHeaderView;



@interface _TtC12CoreAudioKit21CAAUNBandEQHeaderView : TtC12CoreAudioKit16CAAUEQHeaderView {
    ? typeControl;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addParameterWithId:(unsigned int)arg0 name:(id)arg1 shortName:(id)arg2 symbolName:(id)arg3 value:(float)arg4 min:(float)arg5 max:(float)arg6 logBase:(float)arg7 formatter:(id)arg8 unit:(id)arg9 additionalPad:(CGFloat)arg10 ;
-(void)adjustViewIfHorizontallyCompressed:(struct CGSize )arg0 ;
-(void)clear;
-(void)createTypeControlFor:(unsigned int)arg0 valueStrings:(id)arg1 abbreviatedValueStrings:(id)arg2 selectedIndex:(NSInteger)arg3 target:(id)arg4 selector:(SEL)arg5 color:(id)arg6 ;
-(void)reset;
-(void)setVisibilityFor:(unsigned int)arg0 visible:(BOOL)arg1 color:(id)arg2 ;
-(void)updateEQControlWithOldParam:(unsigned int)arg0 newParam:(unsigned int)arg1 value:(float)arg2 color:(id)arg3 ;
-(void)updateTypeControlFor:(unsigned int)arg0 selectedIndex:(NSInteger)arg1 color:(id)arg2 ;


@end


#endif