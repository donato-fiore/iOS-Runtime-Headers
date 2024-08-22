// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBASELAYER_H
#define CKBASELAYER_H

@class CALayer;
@protocol CKLayerDelegate;



@interface CKBaseLayer : CALayer

@property (weak, nonatomic) NSObject<CKLayerDelegate> *ckLayerDelegate; // ivar: _ckLayerDelegate


-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif