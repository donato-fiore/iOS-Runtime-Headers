// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTIMELINECONTROLLER_H
#define CHSTIMELINECONTROLLER_H

@class NSString;
@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>


@interface CHSTimelineController : NSObject {
    id<CHSChronoWidgetServiceServer> *_server;
}


@property (readonly, copy, nonatomic) NSString *avocadoIdentifier; // ivar: _avocadoIdentifier
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier


-(id)initForAvocadoIdentifier:(id)arg0 inBundleIdentifier:(id)arg1 ;
-(id)reloadTimeline;
-(id)reloadTimelineBudgeted;
-(id)reloadTimelineBudgetedWithReason:(id)arg0 ;
-(id)reloadTimelineWithReason:(id)arg0 ;


@end


#endif