// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALDIAGNOSTICSCLUSTERNETWORKFAULTCHANGEEVENT_H
#define MTRGENERALDIAGNOSTICSCLUSTERNETWORKFAULTCHANGEEVENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTRGeneralDiagnosticsClusterNetworkFaultChangeEvent : NSObject

@property (retain, nonatomic) NSArray *current; // ivar: _current
@property (retain, nonatomic) NSArray *previous; // ivar: _previous


-(id)description;
-(id)init;


@end


#endif