// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGRESPONSEPARAMS_H
#define MTRGENERALCOMMISSIONINGCLUSTERSETREGULATORYCONFIGRESPONSEPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterSetRegulatoryConfigResponseParams : NSObject

@property (retain, nonatomic) NSString *debugText; // ivar: _debugText
@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif