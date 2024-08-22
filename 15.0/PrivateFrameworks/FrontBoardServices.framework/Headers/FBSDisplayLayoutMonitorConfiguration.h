// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSDISPLAYLAYOUTMONITORCONFIGURATION_H
#define FBSDISPLAYLAYOUTMONITORCONFIGURATION_H

@class BSServiceConnectionEndpoint;

#import <Foundation/Foundation.h>


@interface FBSDisplayLayoutMonitorConfiguration : NSObject

@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // ivar: _endpoint
@property (nonatomic) BOOL needsUserInteractivePriority; // ivar: _needsUserInteractivePriority
@property (copy, nonatomic) id *transitionHandler; // ivar: _transitionHandler


+(id)configurationForDefaultMainDisplayMonitor;
+(id)configurationWithEndpoint:(id)arg0 ;
-(id)_initWithEndpoint:(id)arg0 ;
-(id)init;


@end


#endif