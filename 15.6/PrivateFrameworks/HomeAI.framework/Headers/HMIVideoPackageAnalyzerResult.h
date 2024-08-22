// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOPACKAGEANALYZERRESULT_H
#define HMIVIDEOPACKAGEANALYZERRESULT_H

@class HMFObject, NSString, NSSet;
@protocol HMIVideoEvent;


#import "HMIVideoFrame.h"

@interface HMIVideoPackageAnalyzerResult : HMFObject <HMIVideoEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // ivar: _events
@property (readonly) HMIVideoFrame *frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (readonly) Class superclass;
@property (readonly) ? time;


-(id)initWithFrame:(id)arg0 events:(id)arg1 regionOfInterest:(struct CGRect )arg2 ;


@end


#endif