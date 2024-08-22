// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUNAVAILABLEMOMENTSHAREBALLOONVIEW_H
#define CKUNAVAILABLEMOMENTSHAREBALLOONVIEW_H

@protocol CKUnavailableMomentShareBalloonViewDelegate;


#import "CKMomentShareStatusBalloonView.h"

@interface CKUnavailableMomentShareBalloonView : CKMomentShareStatusBalloonView

@property (weak, nonatomic) NSObject<CKUnavailableMomentShareBalloonViewDelegate> *delegate;


+(id)_secondaryLabelString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)handleTap:(id)arg0 ;


@end


#endif