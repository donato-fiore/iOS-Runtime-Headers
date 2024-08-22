// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFODIAGRAMVIEW_H
#define INFODIAGRAMVIEW_H

@class UIView, NSString;
@protocol InfoDiagramCablingAnchorDelegate;


#import "AUImageView.h"
#import "AULabel.h"

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate>

 {
    AUImageView *broadbandImageView;
    AULabel *broadbandLabel;
    AULabel *internetLabel;
    AULabel *portLabel;
    AUImageView *wanConnectedBaseImageView;
    AULabel *wanConnectedBaseLabel;
    AUImageView *replacementBaseImageView;
    AULabel *replacementBaseLabel;
    AUImageView *insetImageView;
    UIView *fixedCablingFrameView;
    UIView *animatingCablingFrameView;
    unsigned int wanBaseProductID;
    unsigned int replacementProductID;
    NSInteger sizeClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 wanConnectedBaseProductID:(unsigned int)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 wanConnectedBaseProductID:(unsigned int)arg1 replacementProductID:(unsigned int)arg2 ;
-(struct CGPoint )broadbandInPoint;
-(struct CGPoint )broadbandOutPoint;
-(struct CGPoint )internetPoint;
-(struct CGPoint )swapArcControlPoint;
-(struct CGPoint )swapArcControlPoint1;
-(struct CGPoint )swapArcControlPoint2;
-(struct CGPoint )swapArcLineEndPoint;
-(struct CGPoint )swapArcLineStartPoint;
-(struct CGPoint )wanConnectedBaseWANPoint;
-(void)commonInit;
-(void)dealloc;
-(void)setWANConnectedBaseLabelString:(id)arg0 ;
-(void)startAnimatingCablingLayer;
-(void)stopAnimatingCablingLayer;


@end


#endif