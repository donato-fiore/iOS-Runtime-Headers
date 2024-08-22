// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT17CAAUFILTERCONTROL_H
#define _TTC12COREAUDIOKIT17CAAUFILTERCONTROL_H

@class CALayer;
@protocol CALayerDelegate, _TtP12CoreAudioKit27CAAUViewParameterDataSource_;

#import <Foundation/Foundation.h>


@interface _TtC12CoreAudioKit17CAAUFilterControl : NSObject <CALayerDelegate>

 {
    ? delegate;
    ? param1;
    ? param2;
    ? param3;
    ? guides;
    ? points;
    ? highlighted;
    ? color;
    ? drawVerticalGuide;
    ? drawHorizontalGuide;
    ? drawTrianglesOnEdges;
    ? type;
    ? widthType;
    ? location;
    ? widthPixels;
    ? tapOffest;
}


@property (nonatomic) BOOL bypassed; // ivar: bypassed
@property (nonatomic, retain) CALayer *controlLayer; // ivar: controlLayer
@property (nonatomic, readonly) NSObject<_TtP12CoreAudioKit27CAAUViewParameterDataSource_> *dataSource; // ivar: dataSource
@property (nonatomic) BOOL enabled; // ivar: enabled


-(id)init;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)setWithColor:(id)arg0 ;


@end


#endif