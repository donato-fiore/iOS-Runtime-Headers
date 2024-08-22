// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSTATESERVICEDELEGATE_H
#define SBAPPLICATIONSTATESERVICEDELEGATE_H

@class NSString;
@protocol UISApplicationStateServiceDelegate;

#import <Foundation/Foundation.h>


@interface SBApplicationStateServiceDelegate : NSObject <UISApplicationStateServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataSourceForApplicationBundleIdentifier:(id)arg0 ;


@end


#endif