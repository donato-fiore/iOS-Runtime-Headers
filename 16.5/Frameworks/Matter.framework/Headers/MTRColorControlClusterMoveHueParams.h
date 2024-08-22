// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCOLORCONTROLCLUSTERMOVEHUEPARAMS_H
#define MTRCOLORCONTROLCLUSTERMOVEHUEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterMoveHueParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *moveMode; // ivar: _moveMode
@property (copy, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (copy, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (copy, nonatomic) NSNumber *rate; // ivar: _rate
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif