// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLSPOTLIGHTFEEDBACKLISTENER_H
#define PPLSPOTLIGHTFEEDBACKLISTENER_H

@class NSString;
@protocol SFFeedbackListener;

#import <Foundation/Foundation.h>


@interface PPLSpotlightFeedbackListener : NSObject <SFFeedbackListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didPerformCommand:(id)arg0 ;


@end


#endif