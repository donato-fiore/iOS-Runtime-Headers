// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPWIFINETWORKDIAGNOSTICSCLUSTERASSOCIATIONFAILUREEVENT_H
#define CHIPWIFINETWORKDIAGNOSTICSCLUSTERASSOCIATIONFAILUREEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject

@property (retain, nonatomic) NSNumber *associationFailure; // ivar: _associationFailure
@property (retain, nonatomic) NSNumber *status; // ivar: _status


-(id)init;


@end


#endif