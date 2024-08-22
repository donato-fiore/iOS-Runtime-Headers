// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEARINGPROFILEEXTENSION_H
#define HDHEARINGPROFILEEXTENSION_H

@class NSString;
@protocol HDProfileExtension;

#import <Foundation/Foundation.h>

#import "HDAudioAnalyticsManager.h"
#import "HDHeadphoneDoseManager.h"

@interface HDHearingProfileExtension : NSObject <HDProfileExtension>

 {
    HDAudioAnalyticsManager *_analyticsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDHeadphoneDoseManager *headphoneDoseManager; // ivar: _headphoneDoseManager
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;


@end


#endif