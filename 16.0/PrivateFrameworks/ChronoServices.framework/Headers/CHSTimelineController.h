// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSTIMELINECONTROLLER_H
#define CHSTIMELINECONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSTimelineController : NSObject {
    CHSChronoServicesConnection *_connection;
}


@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind


-(id)initForAvocadoIdentifier:(id)arg0 inBundleIdentifier:(id)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 ;
-(id)reloadTimeline;
-(id)reloadTimelineBudgeted;
-(id)reloadTimelineBudgetedWithReason:(id)arg0 ;
-(id)reloadTimelineWithReason:(id)arg0 ;


@end


#endif