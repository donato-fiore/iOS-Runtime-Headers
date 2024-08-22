// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPGENERALDIAGNOSTICSCLUSTERNETWORKFAULTCHANGEEVENT_H
#define CHIPGENERALDIAGNOSTICSCLUSTERNETWORKFAULTCHANGEEVENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHIPGeneralDiagnosticsClusterNetworkFaultChangeEvent : NSObject

@property (retain, nonatomic) NSArray *current; // ivar: _current
@property (retain, nonatomic) NSArray *previous; // ivar: _previous


-(id)init;


@end


#endif