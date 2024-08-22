// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI15SHINEIMAGELAYER_H
#define _TTC5TEAUI15SHINEIMAGELAYER_H

@class TtC5TeaUI17NonAnimatingLayer;



@interface _TtC5TeaUI15ShineImageLayer : TtC5TeaUI17NonAnimatingLayer {
    ? shineOptions;
    ? shineImage;
    ? shineOffset;
    ? shineScale;
    ? shineImageLayer;
}




+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)layoutSublayers;


@end


#endif