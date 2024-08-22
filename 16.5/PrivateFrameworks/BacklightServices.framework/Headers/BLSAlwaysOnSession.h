// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSALWAYSONSESSION_H
#define BLSALWAYSONSESSION_H

@class NSString;
@protocol BSInvalidatable, BLSBacklightSceneEnvironment;

#import <Foundation/Foundation.h>

#import "BLSFrameSpecifierModel.h"

@interface BLSAlwaysOnSession : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) NSObject<BLSBacklightSceneEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain) BLSFrameSpecifierModel *model; // ivar: _model
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(id)specifierForPresentationDate:(id)arg0 ;
-(void)desiredFidelityForDateInterval:(id)arg0 timelines:(id)arg1 withCompletion:(id)arg2 ;
-(void)invalidate;
-(void)performFrameSpecifiersRequest:(id)arg0 timelines:(id)arg1 ;


@end


#endif