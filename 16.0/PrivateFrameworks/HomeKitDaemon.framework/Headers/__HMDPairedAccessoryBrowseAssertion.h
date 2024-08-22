// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDPAIREDACCESSORYBROWSEASSERTION_H
#define __HMDPAIREDACCESSORYBROWSEASSERTION_H

@class HMFAssertion;


#import "HMDAccessoryBrowser.h"

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion

@property (readonly, weak) HMDAccessoryBrowser *accessoryBrowser; // ivar: _accessoryBrowser


-(id)initWithAccessoryBrowser:(id)arg0 reason:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(void)invalidate;


@end


#endif