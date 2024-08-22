// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUVOLUMEGLYPHVIEW_H
#define PUVOLUMEGLYPHVIEW_H

@class UIView, CALayer, CAStateController, NSString;
@protocol CAMLParserDelegate, OS_dispatch_queue;



@interface PUVolumeGlyphView : UIView <CAMLParserDelegate>

 {
    CALayer *_glyphLayer;
    CAStateController *_stateController;
    NSObject<OS_dispatch_queue> *_loadingQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *stateName; // ivar: _stateName
@property (readonly) Class superclass;


+(id)classSubstitions;
-(Class)CAMLParser:(id)arg0 didFailToFindClassWithName:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleGlyphLayerDidLoad:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif