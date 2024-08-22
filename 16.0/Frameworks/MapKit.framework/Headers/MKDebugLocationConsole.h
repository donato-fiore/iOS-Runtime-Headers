// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKDEBUGLOCATIONCONSOLE_H
#define MKDEBUGLOCATIONCONSOLE_H

@class UILabel, NSTimer, NSString, UIColor, NSDateFormatter;


#import "MKMapView.h"

@interface MKDebugLocationConsole : UILabel {
    MKMapView *_parentMapView;
    NSTimer *_updateTimer;
    NSString *_customText;
    UIColor *_customTextColor;
    NSDateFormatter *_timeStampFormatter;
}


@property (nonatomic) BOOL customTextEnabled; // ivar: _customTextEnabled
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex


-(id)initWithMapView:(id)arg0 ;
-(id)timeStampFormatter;
-(struct CGRect )_debugViewFrameWithMapView:(id)arg0 ;
-(void)_consoleTapped:(id)arg0 ;
-(void)_showNextPage;
-(void)_updateCustomText;
-(void)_updateGPSInfo;
-(void)_updateVehicleInfo;
-(void)setText:(id)arg0 ;
-(void)update;
-(void)updateCustomText:(id)arg0 textColor:(id)arg1 ;
-(void)updateFrameWithEdgeInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif