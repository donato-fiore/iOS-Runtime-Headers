// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPENDINGMOMENTSHAREPHOTOSTACKBALLOONVIEW_H
#define CKPENDINGMOMENTSHAREPHOTOSTACKBALLOONVIEW_H

@protocol CKPendingMomentSharePhotoStackBalloonViewDelegate;


#import "CKGenericPhotoStackBalloonView.h"

@interface CKPendingMomentSharePhotoStackBalloonView : CKGenericPhotoStackBalloonView

@property (weak, nonatomic) NSObject<CKPendingMomentSharePhotoStackBalloonViewDelegate> *delegate;


-(id)_createStackView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)handleTap:(id)arg0 ;


@end


#endif