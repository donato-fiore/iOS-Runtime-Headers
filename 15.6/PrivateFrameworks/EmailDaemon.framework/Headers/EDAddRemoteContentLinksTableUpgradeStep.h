// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDADDREMOTECONTENTLINKSTABLEUPGRADESTEP_H
#define EDADDREMOTECONTENTLINKSTABLEUPGRADESTEP_H

@class NSString;
@protocol EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface EDAddRemoteContentLinksTableUpgradeStep : NSObject <EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_remoteContentLinksTableSchema;
+(int)runWithConnection:(id)arg0 ;


@end


#endif