// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MUETACONFIGURATION_H
#define _MUETACONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _MUETAConfiguration : NSObject

@property (copy, nonatomic) NSString *etaString; // ivar: _etaString
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)addStopConfigurationETAStringForTravelTime:(CGFloat)arg0 ;
+(id)configurationForEtaStringFor:(NSUInteger)arg0 travelTime:(CGFloat)arg1 hasSecondaryController:(BOOL)arg2 isStackingButtons:(BOOL)arg3 ;
+(id)rerouteConfigurationETAStringForTravelTime:(CGFloat)arg0 ;


@end


#endif