// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMTAPTORADARACTIVITY_H
#define PMTAPTORADARACTIVITY_H

@class UIActivity;


#import "VEKProduction.h"
#import "VEKResult.h"
#import "MiroMovie.h"

@interface PMTapToRadarActivity : UIActivity

@property (weak, nonatomic) VEKProduction *production; // ivar: _production
@property (weak, nonatomic) VEKResult *result; // ivar: _result
@property (weak, nonatomic) MiroMovie *tapToRadarMovie; // ivar: _tapToRadarMovie


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_returnTextDebugAsString;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithProduction:(id)arg0 result:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif