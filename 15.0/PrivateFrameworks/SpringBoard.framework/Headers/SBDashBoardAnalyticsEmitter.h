// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDANALYTICSEMITTER_H
#define SBDASHBOARDANALYTICSEMITTER_H

@class CSCoverSheetViewController, NSString;
@protocol CSExternalEventHandling;

#import <Foundation/Foundation.h>


@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling>

 {
    CSCoverSheetViewController *_coverSheetViewController;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;


@end


#endif