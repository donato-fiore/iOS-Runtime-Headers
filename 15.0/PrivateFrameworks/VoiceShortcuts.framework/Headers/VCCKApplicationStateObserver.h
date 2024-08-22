// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCKAPPLICATIONSTATEOBSERVER_H
#define VCCKAPPLICATIONSTATEOBSERVER_H

@class NSString, FBSDisplayLayoutMonitor;

#import <Foundation/Foundation.h>


@interface VCCKApplicationStateObserver : NSObject

@property (nonatomic, getter=isApplicationVisible) BOOL applicationVisible;
@property (nonatomic) uint8_t atomicApplicationVisible; // ivar: _atomicApplicationVisible
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor


-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif